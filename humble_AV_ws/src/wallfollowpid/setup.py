import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'wallfollowpid'

setup(
    name=package_name,
    version='5.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Group 5',
    maintainer_email='group5@todo.todo',
    description='Homework 5',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'follow = wallfollowpid.follow:main',
        ],
    },
)
