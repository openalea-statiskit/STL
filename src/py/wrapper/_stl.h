#ifndef AUTOWIG__STL
#define AUTOWIG__STL

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/stl/STL.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

#endif