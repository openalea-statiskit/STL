#ifndef STATISKIT_STL_H
#define STATISKIT_STL_H

#include <vector>
#include <set>
#include <string>

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
    namespace stl
    {

        template<class T>
            class Generator
            {
                public:
                    Generator(const T& iterable)
                    { 
                        _cur = iterable.cbegin();
                        _end = iterable.cend();
                    }

                    virtual ~Generator()
                    {}

                    Generator(const Generator< T >& generator)
                    { 
                        _cur = generator._cur;
                        _end = generator._end;
                    }

                    bool is_valid() const
                    { return _cur != _end; }

                    Generator< T >& operator++()
                    { 
                        ++_cur;
                        return *this;
                    }

                    typename T::value_type value() const
                    { return *_cur; }

                protected:
                    typename T::const_iterator _cur;
                    typename T::const_iterator _end;
            };


		typedef std::vector< size_t > VectorSizeT;
		typedef std::vector< int > VectorInt;
		typedef std::vector< double > VectorDouble;
		typedef std::vector< std::string > VectorString;

		typedef std::set< size_t, std::less< size_t >, std::allocator< size_t > > SetLessSizeT;
		typedef Generator< SetLessSizeT > SetLessSizeTGenerator;
		STATISKIT_STL_API SetLessSizeTGenerator generator(const SetLessSizeT& iterable);
		STATISKIT_STL_API bool insert(SetLessSizeT& iterable, const size_t& value);
		typedef std::set< int, std::less< int >, std::allocator< int > > SetLessInt;
		typedef Generator< SetLessInt > SetLessIntGenerator;
		STATISKIT_STL_API SetLessIntGenerator generator(const SetLessInt& iterable);
		STATISKIT_STL_API bool insert(SetLessInt& iterable, const int& value);
		typedef std::set< double, std::less< double >, std::allocator< double > > SetLessDouble;
		typedef Generator< SetLessDouble > SetLessDoubleGenerator;
		STATISKIT_STL_API SetLessDoubleGenerator generator(const SetLessDouble& iterable);
		STATISKIT_STL_API bool insert(SetLessDouble& iterable, const double& value);
		typedef std::set< std::string, std::less< std::string >, std::allocator< std::string > > SetLessString;
		typedef Generator< SetLessString > SetLessStringGenerator;
		STATISKIT_STL_API SetLessStringGenerator generator(const SetLessString& iterable);
		STATISKIT_STL_API bool insert(SetLessString& iterable, const std::string& value);

	}
}


#endif