#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		Generator< std::set< Index, std::less< Index >, std::allocator< Index > > > generator(const std::set< Index, std::less< Index >, std::allocator< Index > >& iterable)
		{ return Generator< std::set< Index, std::less< Index >, std::allocator< Index > > >(iterable); }

		bool insert(std::set< Index, std::less< Index >, std::allocator< Index > >& iterable, const Index& value)
		{ return iterable.insert(value).second; }

		Generator< std::set< double, std::less< double >, std::allocator< double > > > generator(const std::set< double, std::less< double >, std::allocator< double > >& iterable)
		{ return Generator< std::set< double, std::less< double >, std::allocator< double > > >(iterable); }

		bool insert(std::set< double, std::less< double >, std::allocator< double > >& iterable, const double& value)
		{ return iterable.insert(value).second; }

	}
}