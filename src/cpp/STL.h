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
    typedef std::size_t Index;

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


		typedef std::vector< Index > VectorIndex;
		typedef std::vector< double > VectorDouble;

		typedef std::set< Index, std::less< Index > > SetLessIndex;
		Generator< std::set< Index, std::less< Index > > > generator(const std::set< Index, std::less< Index > >& iterable);
		typedef std::set< double, std::less< double > > SetLessDouble;
		Generator< std::set< double, std::less< double > > > generator(const std::set< double, std::less< double > >& iterable);

	}
}


#endif