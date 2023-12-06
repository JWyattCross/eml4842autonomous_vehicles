from setuptools import find_packages
from setuptools import setup

setup(
    name='gps_nav_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gps_nav_interfaces', 'gps_nav_interfaces.*')),
)
