import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import math


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('check_val')
        # the following creates the random number subscriber that passes the random 
        # value to an if statment to check if it is divisible by 5
        self.subscription = self.create_subscription(
            Int32, 'rand_num', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

        # this creates the good value publisher that is only used if the random 
        # topic is divisible by 5
        self.publisher = self.create_publisher(Int32, 'good_val', 10)

    def listener_callback(self, msg):
        # this is the if statement that checks for if the random value is divisible by 5
        # and only prints to the terminal and publishes the random value if true
        if msg.data % 5 == 0:
            self.get_logger().info('I heard: "%f"' % msg.data)
            out_msg = Int32()
            out_msg.data = msg.data
            self.publisher.publish(out_msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
