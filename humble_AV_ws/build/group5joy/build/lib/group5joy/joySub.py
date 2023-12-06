import rclpy
from rclpy.node import Node
from ackermann_msgs.msg import AckermannDriveStamped
from sensor_msgs.msg import Joy
import math

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('joySub')
        self.subscription = self.create_subscription(Joy, 'joy', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(AckermannDriveStamped, 'vehicle_command_ackermann', 10)

    def listener_callback(self, msg):
        out_msg = AckermannDriveStamped()
        out_msg.drive.steering_angle = msg.axes[3] * 45 * math.pi / 180.0
        out_msg.drive.speed = msg.axes[1] * 2.0 #6.0
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
