from setuptools import find_packages
from setuptools import setup

setup(
    name='my_best3_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_best3_interfaces', 'my_best3_interfaces.*')),
)
