from functools import wraps
from __api__ import __stl
import sys

__all__ = ["SetLessIndex", "SetLessDouble"]


SetLessIndex = __stl.statiskit.stl.SetLessIndex
SetLessDouble = __stl.statiskit.stl.SetLessDouble

def set_decoration(cls):

    def wrapper__init__(f):
        @wraps(f)
        def __init__(self, arg=None):
            if arg is None:
                f(self)
            elif not isinstance(arg, self.__class__):
                raise TypeError('\'arg\' parameter must be a \'' + self.__class__ + '\' instance')
            else:
                f(self, arg)
        return __init__

    cls.__init__ = wrapper__init__(cls.__init__)

    def __str__(self):
        return "{" + ", ".join(str(value) for value in self) + "}"

    cls.__str__ = __str__

    def __repr__(self):
        return "{" + ", ".join(repr(value) for value in self) + "}"

    cls.__repr__ = __repr__

    def _repr_latex_(self):
        return "$\\left\\{" + ", ".join(getattr(value, "_repr_latex_", getattr(value, "__repr__"))() for value in self) + "\\right\\}$"

    cls._repr_latex_ = _repr_latex_

for cls in __stl.std._Set:
    set_decoration(cls)

import ctypes
if sys.maxsize > 2**32:
    cpp_int = ctypes.c_int32
else:
    cpp_int = ctype.c_int64

def wrapper_insert(f):
    @wraps(f)
    def insert(self, value):
        value = cpp_int(value)
        return f(self, value)
    return insert

SetLessIndex.insert = wrapper_insert(SetLessIndex.insert)