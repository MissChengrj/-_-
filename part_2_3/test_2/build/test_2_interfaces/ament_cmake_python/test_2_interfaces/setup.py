from setuptools import find_packages
from setuptools import setup

setup(
    name='test_2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('test_2_interfaces', 'test_2_interfaces.*')),
)
