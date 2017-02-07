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

		typedef std::vector< Index > VectorIndex;
		typedef std::vector< double > VectorDouble;

		typedef std::set< Index, std::less< Index > > SetLessIndex;
		typedef std::set< double, std::less< double > > SetLessDouble;

	}
}

#endif