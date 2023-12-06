import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, Joy
from ackermann_msgs.msg import AckermannDriveStamped
import numpy as np
from rclpy.clock import Clock
#import time

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('follow')

        self.scanSub = self.create_subscription(LaserScan, 'scan', self.scanCallback, 10)
        self.joySub = self.create_subscription(Joy, 'joy', self.joyCallback, 10)
        self.publisher = self.create_publisher(AckermannDriveStamped, 'vehicle_command_ackermann', 10)

        self.target_distance = 1.0  # goal distance from wall in meters
        self.speed = 0.6            # vehicle speed (-6.0, 6.0). 0.5 to 0.75 is fast enough
        self.heading = -0.05        # heading offset used to compensate for drift

        # gains
        self.declare_parameter('Kp', 0.8)
        self.declare_parameter('Ki', 0.01)
        self.declare_parameter('Kd', 0.0005)

        # error terms
        self.e = 0.0
        self.eM1 = 0.0
        self.eM2 = 0.0

        # clock for elapsed time for integral term
        self.start_time = Clock().now().nanoseconds
        self.elapsed_time = 0 

        # joy variables for overall driving status and button press state - no need to hold button
        global driving
        driving = False
        self.state = -1 # change to +1 if the vehicle should wait for a command to navigate 
        self.prior = 0  # these two make the A button act as a toggle

        self.get_logger().info('Node running... press (A) to toggle between PID control and brakes')

    def scanCallback(self, msg):
        if not driving:
            Kp = self.get_parameter('Kp').value
            Ki = self.get_parameter('Ki').value
            Kd = self.get_parameter('Kd').value
            #dt = ((Clock().now().nanoseconds - self.start_time) - self.elapsed_time) / 1.0E9  # this was in the formula, using seconds
            dt = 0.1 / 720
            dWall = 0.0

            #alterate approach if what I have fails
            # Filter out NaN values in the laser scan data
            #valid_ranges = [range_val for range_val in msg.ranges if not np.isnan(range_val)]
            
            for i in range(len(msg.ranges)):
                theta = -((msg.angle_max-msg.angle_min) / len(msg.ranges))
                x = msg.ranges[i] * np.cos(theta*i)
                y = msg.ranges[i] * np.sin(theta*i)# add nan filtering

                # checks if it is the sideways beam and not an end value. then calcualtes distance on wall between points
                if x < 0.01 and i!=len(msg.ranges):
                    # if np.isnan(msg.ranges[i]) or np.isnan(msg.ranges[i+1]):
                    #     continue
                    d3 = np.sqrt(((msg.ranges[i+1]*np.cos(theta*(i+1))) - x)**2 + ((msg.ranges[i+1]*np.sin(theta*(i+1))) - y)**2)
                    dWall = -msg.ranges[i] * ( ((msg.ranges[i+1]*np.cos(theta*(i+1))) - x) / d3)
                    self.get_logger().info('Distance: ' + str(dWall))
                    break

            # error term - units in meters
            self.e = dWall - self.target_distance
            self.get_logger().info('Error: ' + str(self.e))

            # PID controller
            self.heading += -1 * (Kp * (self.e - self.eM1) + Ki * self.e * dt + Kd * ((self.e - 2 * self.eM1 + self.eM2) / dt) )

            # limit max steering angle
            maximum = 0.8
            if self.heading > maximum:
                self.heading = maximum
            elif self.heading < -maximum:
                self.heading = -maximum

            # copy current error term to previous error term variables
            self.eM2 = self.eM1
            self.eM1 = self.e

            # publish messages to vehicle
            out_msg = AckermannDriveStamped()
            out_msg.drive.steering_angle = self.heading
            out_msg.drive.speed = self.speed
            self.get_logger().info('Speed: ' + str(out_msg.drive.speed) + ' and Angle:' + str(out_msg.drive.steering_angle) + '\n')
            self.publisher.publish(out_msg)
        else: # stopped
            out_msg = AckermannDriveStamped()
            out_msg.drive.steering_angle = 0.0
            out_msg.drive.speed = 0.0
            self.get_logger().info('Speed: ' + str(out_msg.drive.speed) + ' and Angle:' + str(out_msg.drive.steering_angle) + '\n')
            self.publisher.publish(out_msg)

        self.elapsed_time = (Clock().now().nanoseconds - self.start_time)

    def joyCallback(self, joy_msg):
        press = joy_msg.buttons[0]
        if press == 1 and self.prior == 0:
            if self.state > 0:
                driving = True
                self.get_logger().info('Starting the wall follower')
            else:
                driving = False
                self.get_logger().info('Stopping the wall follower')
            self.state = self.state * -1
        self.prior = press

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
