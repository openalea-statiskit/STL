#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		SetIndexGenerator generator(const SetIndex& iterable)
		{ return SetIndexGenerator(iterable); }

		bool insert(SetIndex& iterable, const Index& value)
		{ return iterable.insert(value).second; }

		SetLessIndexGenerator generator(const SetLessIndex& iterable)
		{ return SetLessIndexGenerator(iterable); }

		bool insert(SetLessIndex& iterable, const Index& value)
		{ return iterable.insert(value).second; }

		SetLessIntGenerator generator(const SetLessInt& iterable)
		{ return SetLessIntGenerator(iterable); }

		bool insert(SetLessInt& iterable, const int& value)
		{ return iterable.insert(value).second; }

		SetLessDoubleGenerator generator(const SetLessDouble& iterable)
		{ return SetLessDoubleGenerator(iterable); }

		bool insert(SetLessDouble& iterable, const double& value)
		{ return iterable.insert(value).second; }

		SetLessStringGenerator generator(const SetLessString& iterable)
		{ return SetLessStringGenerator(iterable); }

		bool insert(SetLessString& iterable, const std::string& value)
		{ return iterable.insert(value).second; }

	}
}