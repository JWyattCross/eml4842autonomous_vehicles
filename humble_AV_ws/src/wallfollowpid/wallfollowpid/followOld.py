import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped
from sensor_msgs.msg import Joy
import numpy as np
from rclpy.clock import Clock

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('followOld')
        self.subscription = self.create_subscription(LaserScan, 'scan', self.listener_callback, 10)
        #self.subscription = self.create_subscription(Joy, 'joy', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(AckermannDriveStamped, 'vehicle_command_ackermann', 10)

        self.start_time = Clock().now().nanoseconds
        self.elapsed_time = 0 # nanoseconds

        self.declare_parameter('Kp', 0.10)
        self.declare_parameter('Ki', 0.0)
        self.declare_parameter('Kd', 0.0)

        #error terms
        self.e = 0.0
        self.eM1 = 0.0
        self.eM2 = 0.0

    def listener_callback(self, msg):
        Kp = self.get_parameter('Kp').value
        Ki = self.get_parameter('Ki').value
        Kd = self.get_parameter('Kd').value
        dt = ((Clock().now().nanoseconds - self.start_time) - self.elapsed_time) / 1.0E9 #this was in the formula, i used seconds
        dWall = 0.0
        
        for i in range(len(msg.ranges)):
            theta = -((msg.angle_max-msg.angle_min) / len(msg.ranges))
            x = -msg.ranges[i] * np.cos(theta*i)
            y = msg.ranges[i] * np.sin(theta*i)

            #checks if it is the sideways beam and not an end value. then calcualtes distance on wall between points
            if x < 0.01 and i!=len(msg.ranges):
                d3 = np.sqrt(msg.ranges[i]**2 + msg.ranges[i+1]**2 - 2.0*msg.ranges[i]*msg.ranges[i+1]*np.cos(np.absolute(theta*i - theta*(i+1))))
                #np.absolute may be wrong, just did not want to pipe in negatives
                dWall = msg.ranges[i] * ( ((-msg.ranges[i+1]*np.cos(theta*(i+1))) - x) / d3)
                break

        #controller goes here to spit out heading and velocity commands
        e = dWall-0.5 #error term - units in meters

        heading =-0.05 -Kp*(e - self.eM1) + Ki*e*dt + Kd*((e-2*self.eM1+self.eM2)/dt)

        maximum = 0.8
        if heading > maximum:
            heading = maximum
        elif heading < -maximum:
            heading = -maximum

        self.eM2 =  self.eM1
        self.eM1 = self.e

        #publish messages to vehicle
        out_msg = AckermannDriveStamped()
        out_msg.drive.steering_angle = heading #* np.pi / 180.0
        out_msg.drive.speed = 0.5
        self.get_logger().info('I heard: ' + str(out_msg.drive.speed) + ' and ' + str(out_msg.drive.steering_angle))
        self.publisher.publish(out_msg)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
