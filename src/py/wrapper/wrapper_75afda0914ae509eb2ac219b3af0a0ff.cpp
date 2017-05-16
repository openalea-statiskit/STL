#include "_stl.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::hash< unsigned long int > const volatile * get_pointer<struct ::std::hash< unsigned long int > const volatile >(struct ::std::hash< unsigned long int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_75afda0914ae509eb2ac219b3af0a0ff()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    ::std::size_t  (::std::hash< unsigned long int >::*method_pointer_dfae79899506560a84638950acea42c1)(unsigned long int ) const = &::std::hash< unsigned long int >::operator();
    boost::python::class_< struct ::std::hash< unsigned long int >, autowig::Held< struct ::std::hash< unsigned long int > >::Type > class_75afda0914ae509eb2ac219b3af0a0ff("_Hash_75afda0914ae509eb2ac219b3af0a0ff", "", boost::python::no_init);
    class_75afda0914ae509eb2ac219b3af0a0ff.def("__call__", method_pointer_dfae79899506560a84638950acea42c1, "");

}