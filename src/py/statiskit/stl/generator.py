import _stl
import __stl

from functools import wraps

__all__ = []

def generator_decoration(cls):

    def next(self):
         if self.is_valid():
             value = self.value()
             self.__next__()
             return value
         else:
             raise StopIteration()

    cls.next = next

    def __iter__(self):
        return self

    cls.__iter__ = __iter__


for cls in __stl.statiskit.stl._Generator:
    generator_decoration(cls)