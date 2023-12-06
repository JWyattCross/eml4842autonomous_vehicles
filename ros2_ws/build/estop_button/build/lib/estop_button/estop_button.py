#!/usr/bin/env python3

import serial

#ROS2 library imports
import rclpy
from rclpy.node import Node
from std_msgs.msg import SetBool

#Define your class - use package name with camel case capitalization
class PubSubPython(Node):
    #Initialize the class
    def __init__(self):
        #Create the node with whatever name (package name + node)
        super().__init__('estop_button_node')

        self.declare_parameter('port', 'COM3') #change COM3 to whatever the arduino is listed as
        self.declare_parameter('arduino', serial.Serial('COM3', 115200, timeout=.1)) 

        #Define the publishers here
        self.twist_pub_ = self.create_publisher(SetBool, '/e_stop', 10)

        #Variable to track the current time
        self.current_time = self.get_clock().now()

        #Set the timer period and define the timer function that loops at the desired rate
        time_period = 1/10
        self.time = self.create_timer(time_period, self.timer_callback)



    def pub_status(self):
        
        # Publishes the bool
        msg = SetBool()
        if self.arduino ==:
            msg.data = 0
        else:
            msg.data = 1
        self.publisher_.publish(msg)



#This is some boiler plate code that you slap at the bottom
#to make the node work.
#Make sure to update the name of the function and package, etc
#to match your node
def main(args=None):
    rclpy.init(args=args)

    pubsub_python = PubSubPython()
    rclpy.spin(pubsub_python)
    pubsub_python.destroy_node()
    rclpy.shutdown()

if __name__ == 'main':
    main()