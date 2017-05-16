#include "_stl.h"



namespace autowig
{

    void method_decorator_03b285991d1f51b1a7d55a3416478017(class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & instance, const class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & param_out) { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile * get_pointer<class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile >(class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3b59a0980c80518c808634f7a84dc3cd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1ab29faa1815285a06ca52391d1425f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".stl");
    boost::python::object module_f1ab29faa1815285a06ca52391d1425f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1ab29faa1815285a06ca52391d1425f.c_str()))));
    boost::python::scope().attr("stl") = module_f1ab29faa1815285a06ca52391d1425f;
    boost::python::scope scope_f1ab29faa1815285a06ca52391d1425f = module_f1ab29faa1815285a06ca52391d1425f;
    bool  (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_f217f1ea6c09549cb7b59cc38a74d19e)() const = &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::is_valid;
    class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_03b285991d1f51b1a7d55a3416478017)() = &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::operator++;
    unsigned long int  (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_622d5f3583fc559fbc94aa6460932250)() const = &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::value;
    boost::python::class_< class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >, autowig::Held< class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type > class_3b59a0980c80518c808634f7a84dc3cd("_Generator_3b59a0980c80518c808634f7a84dc3cd", "", boost::python::no_init);
    class_3b59a0980c80518c808634f7a84dc3cd.def(boost::python::init< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const & >(""));
    class_3b59a0980c80518c808634f7a84dc3cd.def(boost::python::init< class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > const & >(""));
    class_3b59a0980c80518c808634f7a84dc3cd.def("is_valid", method_pointer_f217f1ea6c09549cb7b59cc38a74d19e, "");
    class_3b59a0980c80518c808634f7a84dc3cd.def("__next__", method_pointer_03b285991d1f51b1a7d55a3416478017, boost::python::return_internal_reference<>(), "");
    class_3b59a0980c80518c808634f7a84dc3cd.def("__next__", autowig::method_decorator_03b285991d1f51b1a7d55a3416478017);
    class_3b59a0980c80518c808634f7a84dc3cd.def("value", method_pointer_622d5f3583fc559fbc94aa6460932250, "");

}