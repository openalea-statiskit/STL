#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		SetLessIndexGenerator generator(const SetLessIndex& iterable)
		{ return SetLessIndexGenerator(iterable); }

		bool insert(SetLessIndex& iterable, const Index& value)
		{ return iterable.insert(value).second; }

		SetLessDoubleGenerator generator(const SetLessDouble& iterable)
		{ return SetLessDoubleGenerator(iterable); }

		bool insert(SetLessDouble& iterable, const double& value)
		{ return iterable.insert(value).second; }

	}
}