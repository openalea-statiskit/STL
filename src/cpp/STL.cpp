#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		Generator< std::set< Index, std::less< Index > > > generator(const std::set< Index, std::less< Index > >& iterable)
		{ return Generator< std::set< Index, std::less< Index > > >(iterable); }

		bool insert(std::set< Index, std::less< Index > >& iterable, const Index& value)
		{ return iterable.insert(value).second; }

		Generator< std::set< double, std::less< double > > > generator(const std::set< double, std::less< double > >& iterable)
		{ return Generator< std::set< double, std::less< double > > >(iterable); }

		bool insert(std::set< double, std::less< double > >& iterable, const double& value)
		{ return iterable.insert(value).second; }

	}
}