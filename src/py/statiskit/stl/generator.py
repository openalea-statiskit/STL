import _stl
import __stl

import six
from functools import wraps

__all__ = []

def generator_decoration(cls):

    def wrapper___next__(f):
        @wraps(f)
        def __next__(self):
             if self.is_valid():
                 value = self.value()
                 f(self)
                 return value
             else:
                 raise StopIteration()
        return __next__

    cls.__next__ = wrapper___next__(cls.__next__)

    if six.PY2:
        cls.next = cls.__next__
        del cls.__next__

    def __iter__(self):
        return self

    cls.__iter__ = __iter__


for cls in __stl.statiskit.stl._Generator:
    generator_decoration(cls)