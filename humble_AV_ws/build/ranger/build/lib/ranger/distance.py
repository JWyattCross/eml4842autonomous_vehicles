import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import PointCloud
import numpy as np
from geometry_msgs.msg import Point32

#sensor_msgs/LaserScan.msg
#https://docs.ros.org/en/noetic/api/sensor_msgs/html/msg/LaserScan.html
#sensor_msgs/PointCloud.msg
#https://docs.ros.org/en/melodic/api/sensor_msgs/html/msg/PointCloud.html
#   also need: geometry_msgs/Point32.msg
#   as the pointcloud contains one of these

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('distance')
        self.subscription = self.create_subscription(LaserScan, 'scan', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(PointCloud, 'xyCoordinatesPC', 10) #published PC topic name is in ' '

    def listener_callback(self, msg):
        out_msg = PointCloud() #create the PC message to contain the P32 below
        
        for i in range(len(msg.ranges)):
            point_msg = Point32() #create out P32 message that goes in the PC
            theta = -((msg.angle_max-msg.angle_min) / len(msg.ranges))* i# * msg.angle_increment
            point_msg.x = -msg.ranges[i] * np.cos(theta)
            point_msg.y = msg.ranges[i] * np.sin(theta)
            point_msg.z = 0.0 #driver is not Evel Knievel

            out_msg.points.append(point_msg)    #append the points assigned above. 
        out_msg.header = msg.header
        self.publisher.publish(out_msg)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
