#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		Generator< std::set< Index, std::less< Index > > > generator(const std::set< Index, std::less< Index > >& iterable)
		{ return Generator< std::set< Index, std::less< Index > > >(iterable); }

		Generator< std::set< double, std::less< double > > > generator(const std::set< double, std::less< double > >& iterable)
		{ return Generator< std::set< double, std::less< double > > >(iterable); }

	}
}