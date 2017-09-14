#ifndef STATISKIT_STL_H
#define STATISKIT_STL_H

#include <vector>
#include <set>
#include <unordered_set>
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
    typedef unsigned long int Index;
    typedef std::set< Index > Indices;

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

        typedef std::string String;


		typedef std::vector< Index > VectorIndex;
		typedef std::vector< int > VectorInt;
		typedef std::vector< double > VectorDouble;
		typedef std::vector< std::string > VectorString;

		typedef std::set< Index, std::less< Index >, std::allocator< Index > > SetLessIndex;
		typedef Generator< SetLessIndex > SetLessIndexGenerator;
		STATISKIT_STL_API SetLessIndexGenerator generator(const SetLessIndex& iterable);
		STATISKIT_STL_API bool insert(SetLessIndex& iterable, const Index& value);
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
		typedef std::unordered_set< Index > SetIndex;
		typedef Generator< SetIndex > SetIndexGenerator;
		STATISKIT_STL_API SetIndexGenerator generator(const SetIndex& iterable);
		STATISKIT_STL_API bool insert(SetIndex& iterable, const Index& value);

	}
}


#endif