from launch import LaunchDescription
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory

config_dir = get_package_share_directory("cross_pkg")

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cross_pkg',
            executable='run_node1',
            name='generate_random_num',
            output='screen'
        ),
        Node(
            package='cross_pkg',
            executable='run_node2', #the executable value is what you call in the temrinal
            name='check_val', 
            output='screen'
        ),
    ])