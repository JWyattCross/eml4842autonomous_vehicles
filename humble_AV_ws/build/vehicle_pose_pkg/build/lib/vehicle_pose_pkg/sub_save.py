import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseStamped
import numpy as np
import datetime

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('sub_save')
        self.gps_subscription = self.create_subscription(NavSatFix, 'gps', self.gps_callback, 10)
        self.odom_subscription = self.create_subscription(Odometry, 'odometry', self.odometry_callback, 10)
        self.pose_publisher = self.create_publisher(PoseStamped, 'vehicle_pose', 10)
        
        # Open files to write to
        self.gpsTxt = open('gps_data.txt', 'w')
        self.gpsTxt.write(f'Time,Latitude,Longitude\n') # this adds headers on the top line. used to import into google earth pro
        
        self.angleTxt = open('angle_data.txt', 'w')

    def gps_callback(self, msg):
        # Write lat and lon values to file
        self.get_logger().info(f'Latitude: {msg.latitude}\nLongitude: {msg.longitude}\n\n')

        time = datetime.datetime.fromtimestamp(msg.header.stamp.sec, tz=datetime.timezone(datetime.timedelta(hours=-4)))
        self.gpsTxt.write(f'{time},{msg.latitude},{msg.longitude}\n')

        ps_msg = PoseStamped()
        ps_msg.header = msg.header
        ps_msg.pose.position.x = msg.latitude
        ps_msg.pose.position.y = msg.longitude
        ps_msg.pose.position.z = 0.0
        self.pose_publisher.publish(ps_msg)

    def odometry_callback(self, msg):
        # Define quaternion components in a more readable format
        # Odom message: https://docs.ros.org/en/noetic/api/nav_msgs/html/msg/Odometry.html
        x = msg.pose.pose.orientation.x
        y = msg.pose.pose.orientation.y
        z = msg.pose.pose.orientation.z
        w = msg.pose.pose.orientation.w

        # Quat calculation - https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles#Source_code_2
        angle = np.arctan2( 2*(w*z + x*y), 1 - 2*(y*y + z*z) )
        
        # Write to file
        self.get_logger().info(f'x: {x}, y: {y}, z: {z}, w: {w}, Angle: {angle}\n')
        self.angleTxt.write(f'x: {x}, y: {y}, z: {z}, w: {w}, Angle: {angle}\n')
        
        ps_msg = PoseStamped()
        ps_msg.header = msg.header
        ps_msg.pose.orientation = msg.pose.pose.orientation
        self.pose_publisher.publish(ps_msg)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)

    minimal_subscriber.gpsTxt.close()
    minimal_subscriber.angleTxt.close()

    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
