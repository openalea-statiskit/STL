#include "_stl.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > const volatile * get_pointer<class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > const volatile >(class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_6a735131c3895f32adab536c11f36783(class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & instance, class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & param_out)     { instance.operator++() = param_out; }
}


void wrapper_74bc331707c1505eb2f807cae7c32bbb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1ab29faa1815285a06ca52391d1425f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stl");
    boost::python::object module_f1ab29faa1815285a06ca52391d1425f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1ab29faa1815285a06ca52391d1425f.c_str()))));
    boost::python::scope().attr("stl") = module_f1ab29faa1815285a06ca52391d1425f;
    boost::python::scope scope_f1ab29faa1815285a06ca52391d1425f = module_f1ab29faa1815285a06ca52391d1425f;
    bool  (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_344512c24d55594db904f0ba29f2ee0b)() const = &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::is_valid;
    class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_6a735131c3895f32adab536c11f36783)() = &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::operator++;
    double  (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_3d3f1d6ba56e50029f25e9b295d1fb75)() const = &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::value;
    boost::python::class_< class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >, autowig::Held< class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > >::Type > class_74bc331707c1505eb2f807cae7c32bbb("_Generator_74bc331707c1505eb2f807cae7c32bbb", "", boost::python::no_init);
    class_74bc331707c1505eb2f807cae7c32bbb.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >(""));
    class_74bc331707c1505eb2f807cae7c32bbb.def(boost::python::init< class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > const & >(""));
    class_74bc331707c1505eb2f807cae7c32bbb.def("is_valid", method_pointer_344512c24d55594db904f0ba29f2ee0b, "");
    class_74bc331707c1505eb2f807cae7c32bbb.def("__next__", method_pointer_6a735131c3895f32adab536c11f36783, boost::python::return_internal_reference<>(), "");
    class_74bc331707c1505eb2f807cae7c32bbb.def("__next__", autowig::method_decorator_6a735131c3895f32adab536c11f36783);
    class_74bc331707c1505eb2f807cae7c32bbb.def("value", method_pointer_3d3f1d6ba56e50029f25e9b295d1fb75, "");

}