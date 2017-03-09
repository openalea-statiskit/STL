#include "_stl.h"



namespace autowig
{

    void method_decorator_3433eb819fff55e998cbd8421b3bcb82(class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & instance, class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & param_out)     { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > const volatile * get_pointer<class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > const volatile >(class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e76a1308464d5a9a837d9a61f942fae7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1ab29faa1815285a06ca52391d1425f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stl");
    boost::python::object module_f1ab29faa1815285a06ca52391d1425f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1ab29faa1815285a06ca52391d1425f.c_str()))));
    boost::python::scope().attr("stl") = module_f1ab29faa1815285a06ca52391d1425f;
    boost::python::scope scope_f1ab29faa1815285a06ca52391d1425f = module_f1ab29faa1815285a06ca52391d1425f;
    bool  (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_cb7316f1faaf5e2d8c24760e29e57f27)() const = &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::is_valid;
    class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_3433eb819fff55e998cbd8421b3bcb82)() = &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::operator++;
    int  (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_e6326c3ac992538d87ced8208ef5d2a6)() const = &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::value;
    boost::python::class_< class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >, autowig::Held< class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > >::Type > class_e76a1308464d5a9a837d9a61f942fae7("_Generator_e76a1308464d5a9a837d9a61f942fae7", "", boost::python::no_init);
    class_e76a1308464d5a9a837d9a61f942fae7.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >(""));
    class_e76a1308464d5a9a837d9a61f942fae7.def(boost::python::init< class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > const & >(""));
    class_e76a1308464d5a9a837d9a61f942fae7.def("is_valid", method_pointer_cb7316f1faaf5e2d8c24760e29e57f27, "");
    class_e76a1308464d5a9a837d9a61f942fae7.def("__next__", method_pointer_3433eb819fff55e998cbd8421b3bcb82, boost::python::return_internal_reference<>(), "");
    class_e76a1308464d5a9a837d9a61f942fae7.def("__next__", autowig::method_decorator_3433eb819fff55e998cbd8421b3bcb82);
    class_e76a1308464d5a9a837d9a61f942fae7.def("value", method_pointer_e6326c3ac992538d87ced8208ef5d2a6, "");

}