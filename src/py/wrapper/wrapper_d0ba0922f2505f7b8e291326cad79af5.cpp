#include "_stl.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::equal_to< unsigned long int > const volatile * get_pointer<struct ::std::equal_to< unsigned long int > const volatile >(struct ::std::equal_to< unsigned long int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d0ba0922f2505f7b8e291326cad79af5()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    bool  (::std::equal_to< unsigned long int >::*method_pointer_096db2c8a9775702bd7119d2d5b8e22d)(unsigned long int const &, unsigned long int const &) const = &::std::equal_to< unsigned long int >::operator();
    boost::python::class_< struct ::std::equal_to< unsigned long int >, autowig::Held< struct ::std::equal_to< unsigned long int > >::Type, boost::python::bases< struct ::std::binary_function< unsigned long int, unsigned long int, bool > > > class_d0ba0922f2505f7b8e291326cad79af5("_EqualTo_d0ba0922f2505f7b8e291326cad79af5", "", boost::python::no_init);
    class_d0ba0922f2505f7b8e291326cad79af5.def(boost::python::init<  >(""));
    class_d0ba0922f2505f7b8e291326cad79af5.def(boost::python::init< struct ::std::equal_to< unsigned long int > const & >(""));
    class_d0ba0922f2505f7b8e291326cad79af5.def("__call__", method_pointer_096db2c8a9775702bd7119d2d5b8e22d, "");

    if(autowig::Held< struct ::std::equal_to< unsigned long int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::std::equal_to< unsigned long int > >::Type, autowig::Held< struct ::std::binary_function< unsigned long int, unsigned long int, bool > >::Type >();
    }

}