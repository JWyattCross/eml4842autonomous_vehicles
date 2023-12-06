import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseStamped
import numpy as np
import datetime
import utm

class pose_estimator(Node):
    def __init__(self):
        super().__init__('sub_save')
        self.gps_subscription = self.create_subscription(NavSatFix, 'gps', self.gps_callback, 10)
        self.odom_subscription = self.create_subscription(Odometry, 'odometry', self.odometry_callback, 10)
        self.pose_publisher = self.create_publisher(PoseStamped, 'vehicle_pose', 10)
        
        #define variables that will hold the values of the 2 subscriptions
        self.x_ang = 0.0
        self.y_ang = 0.0
        self.z_ang = 0.0
        self.w_ang = 0.0

        self.x_pos = 0.0
        self.y_pos = 0.0
        self.z_pos = 0.0

        #need to decalre header variable before filling it with the gps msg header
        self.header = None

        #create files to hold utm and lat long values so we can graph and plot
        self.time = datetime.datetime.now()
        self.latlong_file = open(('LatLong_' + str(self.time) + '.txt'), 'w')
        self.utm_file = open(('UTM_' + str(self.time) + '.txt'), 'w')

    def gps_callback(self, msg):
        #convert to UTM
        x_utm, y_utm, other1, other2 = utm.from_latlon(msg.latitude, msg.longitude)

        #add message
        self.header = msg.header
        self.x_pos = x_utm
        self.y_pos = y_utm
        self.z_pos = 0.0

        #save to file
        self.latlong_file.write(f'{msg.latitude}, {msg.longitude}\n')
        self.utm_file.write(f'{x_utm}, {y_utm}\n')


    def odometry_callback(self, msg):
        #add message
        self.x_ang = msg.pose.pose.orientation.x
        self.y_ang = msg.pose.pose.orientation.y
        self.z_ang = msg.pose.pose.orientation.z
        self.w_ang = msg.pose.pose.orientation.w

    def main_timer_callback(self):
        # This will only publish after each subscription has occured at least once
        if self.have_goal_pose and self.have_vehicle_pose:

            #create message type
            out_msg = PoseStamped()

            #copy header info
            out_msg.header = self.header

            #add quat values to orientation
            out_msg.pose.orientation.x = self.x_ang
            out_msg.pose.orientation.y = self.y_ang
            out_msg.pose.orientation.z = self.z_ang
            out_msg.pose.orientation.w = self.w_ang

            #add utm values to position
            out_msg.pose.position.x = self.x_pos
            out_msg.pose.position.y = self.y_pos
            out_msg.pose.position.z = self.z_pos

            #publish
            self.publisher.publish(out_msg)


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = pose_estimator()
    rclpy.spin(minimal_subscriber)

    #close files
    pose_estimator.latlong_file.close()
    pose_estimator.utm_file.close()

    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()