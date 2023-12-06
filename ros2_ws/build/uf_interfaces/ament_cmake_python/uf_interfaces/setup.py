from setuptools import find_packages
from setuptools import setup

setup(
    name='uf_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('uf_interfaces', 'uf_interfaces.*')),
)
