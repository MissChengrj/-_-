from setuptools import find_packages, setup

package_name = 'test_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jerry',
    maintainer_email='jerry@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "pub = test_2.pub_node:main",
            "sub = test_2.sub_node:main",
            "ser = test_2.ser_node:main",
            "cli = test_2.cli_node:main"
        ],
    },
)
