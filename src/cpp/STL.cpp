#include "STL.h"

namespace statiskit
{
	namespace stl
	{
		SetLessSizeTGenerator generator(const SetLessSizeT& iterable)
		{ return SetLessSizeTGenerator(iterable); }

		bool insert(SetLessSizeT& iterable, const size_t& value)
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