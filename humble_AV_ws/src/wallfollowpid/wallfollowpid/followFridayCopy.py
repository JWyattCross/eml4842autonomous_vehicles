import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped
from sensor_msgs.msg import Joy
import numpy as np
from rclpy.clock import Clock

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('joySub')
        self.joySub = self.create_subscription(Joy, 'joy', self.joyCallback, 10)
        self.scanSub = self.create_subscription(LaserScan, 'scan', self.scanCallback, 10)
        self.publisher = self.create_publisher(AckermannDriveStamped, 'vehicle_command_ackermann', 10)
        
        self.driving = True
        self.target_distance = 1.0  # goal distance from wall in meters
        self.speed = 0.5

        # gains
        self.declare_parameter('Kp', 0.8)
        self.declare_parameter('Ki', 0.01)
        self.declare_parameter('Kd', 1.0)

        # error terms
        self.e = 0.0
        self.eM1 = 0.0
        self.eM2 = 0.0

        # clock for elapsed time for integral term
        self.start_time = Clock().now().nanoseconds
        self.elapsed_time = 0

        #heading offset to make 'Matthew' drive straight
        self.heading = -0.05

    def scanCallback(self, msg):
        if self.driving:
            Kp = self.get_parameter('Kp').value
            Ki = self.get_parameter('Ki').value
            Kd = self.get_parameter('Kd').value
            dt = ((Clock().now().nanoseconds - self.start_time) - self.elapsed_time) / 1.0E9 #this was in the formula, i used seconds
            dWall = 0.0
            
            for i in range(len(msg.ranges)):
                theta = -((msg.angle_max-msg.angle_min) / len(msg.ranges))
                x = msg.ranges[i] * np.cos(theta*i)
                y = msg.ranges[i] * np.sin(theta*i)# add nan filtering

                # checks if it is the sideways beam and not an end value. then calcualtes distance on wall between points
                if x < 0.01 and i!=len(msg.ranges):
                    d3 = np.sqrt(((msg.ranges[i+1]*np.cos(theta*(i+1))) - x)**2 + ((msg.ranges[i+1]*np.sin(theta*(i+1))) - y)**2)
                    dWall = -msg.ranges[i] * ( ((msg.ranges[i+1]*np.cos(theta*(i+1))) - x) / d3)
                    self.get_logger().info('Distance: ' + str(dWall))
                    break

            # error term - units in meters
            self.e = dWall - self.target_distance
            self.get_logger().info('Error: ' + str(self.e))

            # PID controller
            self.heading += -Kp*(self.e - self.eM1) + Ki*self.e*dt + Kd*((self.e-2*self.eM1+self.eM2)/dt)

            # limit max steering angle
            maximum = 0.8
            if self.heading > maximum:
                self.heading = maximum
            elif self.heading < -maximum:
                self.heading = -maximum

            # copy current error term to previous error term variables
            self.eM2 =  self.eM1
            self.eM1 = self.e

            # publish messages to vehicle
            out_msg = AckermannDriveStamped()
            out_msg.drive.steering_angle = self.heading
            out_msg.drive.speed = self.speed
            self.get_logger().info('Speed: ' + str(out_msg.drive.speed) + ' and Angle:' + str(out_msg.drive.steering_angle))
            self.publisher.publish(out_msg)

        else: # if not self.driving, then publish controller inputs
            out_msg = AckermannDriveStamped()
            out_msg.drive.steering_angle = msg.axes[3] * 45 * np.pi / 180.0
            out_msg.drive.speed = msg.axes[1] * 2.0 #6.0
            self.get_logger().info('I heard: ' + str(out_msg.drive.speed) + ' and ' + str(out_msg.drive.steering_angle))
            self.publisher.publish(out_msg)


    def joyCallback(self, joyMsg):
        if joyMsg.buttons[0] == 1:  # [0] corresponds to A on the controller
            self.driving = True
            self.get_logger().info('\nI heard: True\n')

        else:
            self.driving = False
            self.get_logger().info('\nI heard: False\n')



def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
