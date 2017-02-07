# -*-python-*-

import os
from SCons.Errors import EnvironmentError

env = Environment(tools = ['toolchain'])

VECTORS = ['Index',
           'double']

SETS = { 'less': ['Index',
                  'double']}

HEADER = """\
#ifndef STATISKIT_STL_H
#define STATISKIT_STL_H

#include <vector>
#include <set>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_STL
        #ifdef __GNUC__
            #define STATISKIT_STL_API __attribute__ ((dllexport))
        #else
            #define STATISKIT_STL_API __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_STL_API __attribute__ ((dllimport))
        #else
            #define STATISKIT_STL_API __declspec(dllimport)
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_STL_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_STL_API
    #endif
#endif

namespace statiskit
{
    typedef long unsigned int Index;

    namespace stl
    {
"""

def capitalize(T):
    return ''.join([t.capitalize() for t in T.replace('std::', '').replace('_', ' ').split()])

with open('src/cpp/STL.h', 'w') as filehandler:
    filehandler.write(HEADER)
    filehandler.write('\n')
    for T in VECTORS:
        filehandler.write('\t\ttypedef std::vector< ' + T + ' > Vector' + capitalize(T) +';\n')
    filehandler.write('\n')
    for sort in SETS:
        for T in SETS[sort]:
            filehandler.write('\t\ttypedef std::set< ' + T + ', std::' + sort + '< ' + T + ' > > Set' + sort.capitalize() + capitalize(T) +';\n')
    filehandler.write('\n')
    filehandler.write('\t}\n}\n\n#endif')

with open('src/cpp/STL.cpp', 'w') as filehandler:
    filehandler.write('#include "STL.h"')

VariantDir('build', 'src')
try:
  SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise
try:
  SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise
try:
  SConscript(os.path.join('conda', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise
Default("install")
