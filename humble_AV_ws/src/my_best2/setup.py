from setuptools import find_packages, setup

package_name = 'my_best2'

setup(
    name=package_name,
    version='23.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='wyatt',
    maintainer_email='jamescross@ufl.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = my_best2.my_pub:main',
            'listener = my_best2.my_sub:main',
            'pub_me = my_best2.pub_pt:main',
            'sub_me = my_best2.sub_pt_pub_polar:main'
        ],
    },
)
