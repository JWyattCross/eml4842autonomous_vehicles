# ros2 imports
import rclpy
from rclpy.node import Node
import math
import numpy as np

from geometry_msgs.msg import TwistStamped, PoseStamped
from std_msgs.msg import Float64

from uf_interfaces.msg import Position


class VehiclePositionChecker(Node):
    def __init__(self):
        super().__init__('vehicle_position_checker_node')

        # Declare parameters
        self.declare_parameter('health', 100.0)
        self.declare_parameter('deduction_const', 5.0)
        self.declare_parameter('range', 1.0)
        self.declare_parameter('vehicle_id', 'bravo')
        self.declare_parameter('rate', 1.0/10.0)

        # Get parameters
        self.health=self.get_parameter('health').value
        self.deduction_const=self.get_parameter('deduction_const').value
        self.range=self.get_parameter('range').value
        self.vehicle_id=self.get_parameter('vehicle_id').value
        self.rate=self.get_parameter('rate').value

        # Creates a dictionary to store the positions
        self.vehicle_positions = {}

        # Creates a publisher for the bool distance response
        self.publisher_ = self.create_publisher(Float64, '/bravo/health_status', 10)

        # Subscribes to the vehicle position topics #change /bravo/pose to pose if in a namespace
        self.create_subscription(PoseStamped, '/bravo/pose', self.current_position_callback, 10)
        self.create_subscription(Position, '/ground/agent/pose', self.vehicle_position_callback, 10)

        # Clock
        self.timer_ = self.create_timer(self.rate, self.check_positions)

    def vehicle_position_callback(self, msg):
        # Called when a new position message is received for a vehicle
        vehicle_id = msg.name
        position = [msg.x, msg.y, msg.z, msg.yaw]

        # Stores the position in a dictionary
        self.vehicle_positions[vehicle_id] = position
        print(self.vehicle_positions)
        #print(self.position)

    def current_position_callback(self, msg):
        # Called when a new position message is received for a vehicle
        vehicle_id = self.vehicle_id

        xi = msg.pose.orientation.x
        yi = msg.pose.orientation.y
        zi = msg.pose.orientation.z
        wi = msg.pose.orientation.w
        euler = self.euler_from_quaternion([wi,xi,yi,zi])
        
        position = [msg.pose.position.x, msg.pose.position.y, msg.pose.position.z, euler[2]]

        # Stores the position in a dictionary
        self.vehicle_positions[vehicle_id] = position

    def euler_from_quaternion(self, q):

        #roll (x-axis rotation)
        sinr_cosp = 2 * (q[0] * q[1] + q[2] * q[3]);
        cosr_cosp = 1 - 2 * (q[1] * q[1] + q[2] * q[1]);
        roll = math.atan2(sinr_cosp, cosr_cosp);

        #pitch (y-axis rotation)
        sinp = np.sqrt(1 + 2 * (q[0] * q[2] - q[1] * q[3]));
        cosp = np.sqrt(1 - 2 * (q[0] * q[2] - q[1] * q[3]));
        pitch = 2 * math.atan2(sinp, cosp) - math.pi / 2;

        #yaw (z-axis rotation)
        siny_cosp = 2 * (q[0] * q[3] + q[1] * q[2]);
        cosy_cosp = 1 - 2 * (q[2] * q[2] + q[3] * q[3]);
        yaw = math.atan2(siny_cosp, cosy_cosp);

        angles = [roll, pitch, yaw]

        return angles;

    def check_positions(self):
        vehicles_within_range = False
        # Loops through all pairs of vehicles
        
        if len(self.vehicle_positions) > 1:
            vehicle1_pos = self.vehicle_positions[self.vehicle_id]
            for vehicle2_id, vehicle2_pos in self.vehicle_positions.items():
                if self.vehicle_id != vehicle2_id:
                    # Calculates the distance between the positions
                    distance = ((vehicle1_pos[0] - vehicle2_pos[0])**2 + (vehicle1_pos[1] - vehicle2_pos[1])**2)**0.5
                    if distance < self.range:
                        # If the distance is less than above, changes the return value
                        vehicles_within_range = True
                        break
                if vehicles_within_range:
                    break

        # Reduce health if vehicle_within_range
        if self.health > 0.0 and vehicles_within_range == True:
            self.health -= self.rate*self.deduction_const
        elif self.health <= 0.0 and vehicles_within_range == True:
            self.health = 0.0
        print(self.health)

        # Publishes
        msg = Float64()
        msg.data = self.health #this is if you want to publish the health value    
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    health_node = VehiclePositionChecker()
    rclpy.spin(health_node)
    health_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

