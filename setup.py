from setuptools import setup, Extension

setup(
    name='isEven-lib',
    version='1',
    ext_modules=[Extension('isEven', ['isEven.c'])],
)
