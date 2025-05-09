from setuptools import find_packages
from setuptools import setup

setup(
    name='svs_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('svs_interfaces', 'svs_interfaces.*')),
)
