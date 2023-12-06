import rclpy
from rclpy.node import Node
from rclpy.clock import Clock
import random
from std_msgs.msg import Int32


class PointPublisher(Node):

    def __init__(self):
        # this is the default block of code with the names and message types changed
        super().__init__('generate_random_num')
        self.publisher = self.create_publisher(Int32, 'rand_num', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.start_time = Clock().now().nanoseconds
        self.elapsed_time = 0  # nanoseconds

    def timer_callback(self):
        self.elapsed_time = Clock().now().nanoseconds - self.start_time
        elapsed_time_seconds = self.elapsed_time / 1.0E9

        msg = Int32()
        # this calls the random library to generate an integer between 0
        # and 100 inclusive and asisgns it to the Int32 message being published
        msg.data = random.randint(0, 100)

        self.publisher.publish(msg)
        # prints to the terminal only the publised random value
        self.get_logger().info('Publishing: %f' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    pt_publisher = PointPublisher()

    rclpy.spin(pt_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pt_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
