#ifndef AUTOWIG__STL
#define AUTOWIG__STL

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/stl/STL.h>

namespace autowig
{
     template<class T> struct Held {
        typedef T* Type;
        static bool const is_class = false;
    };
}

#endif