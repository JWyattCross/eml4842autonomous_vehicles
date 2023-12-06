from setuptools import find_packages, setup

package_name = 'cross_pkg'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='James Cross',
    maintainer_email='jamescross@ufl.edu',
    description='HW2 Assignment',
    license='Where we\'re going, we dont need id',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'run_node1 = cross_pkg.generate_random_num:main',
            'run_node2 = cross_pkg.check_val:main'
        ],
    },
)
