from setuptools import find_packages, setup

package_name = 'group5joy'

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
    maintainer='Group 5',
    maintainer_email='Group5@todo.todo',
    description='HW3 - Joystick Control of Vehicle',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'joySub = group5joy.joySub:main',
        ],
    },
)
