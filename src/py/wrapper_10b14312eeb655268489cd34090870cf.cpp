#include "_stl.h"



namespace autowig
{

    void method_decorator_9ee3d1b710825c39bad8dfdf4db13de4(class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & instance, class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & param_out)     { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile * get_pointer<class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile >(class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_10b14312eeb655268489cd34090870cf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1ab29faa1815285a06ca52391d1425f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stl");
    boost::python::object module_f1ab29faa1815285a06ca52391d1425f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1ab29faa1815285a06ca52391d1425f.c_str()))));
    boost::python::scope().attr("stl") = module_f1ab29faa1815285a06ca52391d1425f;
    boost::python::scope scope_f1ab29faa1815285a06ca52391d1425f = module_f1ab29faa1815285a06ca52391d1425f;
    bool  (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_06f825ec70fd53388588a2610095ac20)() const = &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::is_valid;
    class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_9ee3d1b710825c39bad8dfdf4db13de4)() = &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::operator++;
    unsigned long int  (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_90c893e125985b459d0576d6cfa0c429)() const = &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::value;
    boost::python::class_< class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, autowig::Held< class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type > class_10b14312eeb655268489cd34090870cf("_Generator_10b14312eeb655268489cd34090870cf", "", boost::python::no_init);
    class_10b14312eeb655268489cd34090870cf.def(boost::python::init< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & >(""));
    class_10b14312eeb655268489cd34090870cf.def(boost::python::init< class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const & >(""));
    class_10b14312eeb655268489cd34090870cf.def("is_valid", method_pointer_06f825ec70fd53388588a2610095ac20, "");
    class_10b14312eeb655268489cd34090870cf.def("__next__", method_pointer_9ee3d1b710825c39bad8dfdf4db13de4, boost::python::return_internal_reference<>(), "");
    class_10b14312eeb655268489cd34090870cf.def("__next__", autowig::method_decorator_9ee3d1b710825c39bad8dfdf4db13de4);
    class_10b14312eeb655268489cd34090870cf.def("value", method_pointer_90c893e125985b459d0576d6cfa0c429, "");

}