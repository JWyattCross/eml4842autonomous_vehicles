import os
import sys
import math
import numpy as np

def euler_from_quaternion(q):

        #roll (x-axis rotation)
        sinr_cosp = 2 * (q[0] * q[1] + q[2] * q[3])
        cosr_cosp = 1 - 2 * (q[1] * q[1] + q[2] * q[1])
        roll = math.atan2(sinr_cosp, cosr_cosp)

        #pitch (y-axis rotation)
        sinp = np.sqrt(1 + 2 * (q[0] * q[2] - q[1] * q[3]))
        cosp = np.sqrt(1 - 2 * (q[0] * q[2] - q[1] * q[3]))
        pitch = 2 * math.atan2(sinp, cosp) - math.pi / 2

        #yaw (z-axis rotation)
        siny_cosp = 2 * (q[0] * q[3] + q[1] * q[2])
        cosy_cosp = 1 - 2 * (q[2] * q[2] + q[3] * q[3])
        yaw = math.atan2(siny_cosp, cosy_cosp)

        angles = [roll, pitch, yaw]

        return angles


def main():
    quat = [0.230, 0.152, 0.230, 0.993] #should be 23, 23, 23 in euler
    euler = euler_from_quaternion(quat)
    print(euler)


if __name__ == "__main__":
    main()