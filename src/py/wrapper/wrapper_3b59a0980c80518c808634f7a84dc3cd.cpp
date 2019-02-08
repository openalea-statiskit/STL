#include "_stl.h"

bool  (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_f217f1ea6c09549cb7b59cc38a74d19e)()const= &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::is_valid;
class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_03b285991d1f51b1a7d55a3416478017)()= &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::operator++;
unsigned long int  (::statiskit::stl::Generator< ::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_622d5f3583fc559fbc94aa6460932250)()const= &::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::value;

namespace autowig {
    void method_decorator_03b285991d1f51b1a7d55a3416478017(class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & instance, const class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > & param_out) { instance.operator++() = param_out; }
}

void wrapper_3b59a0980c80518c808634f7a84dc3cd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >, autowig::HolderType< class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type > class_3b59a0980c80518c808634f7a84dc3cd(module, "_Generator_3b59a0980c80518c808634f7a84dc3cd", "");
    class_3b59a0980c80518c808634f7a84dc3cd.def(pybind11::init< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const & >());
    class_3b59a0980c80518c808634f7a84dc3cd.def(pybind11::init< class ::statiskit::stl::Generator< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > > const & >());
    class_3b59a0980c80518c808634f7a84dc3cd.def("is_valid", method_pointer_f217f1ea6c09549cb7b59cc38a74d19e, "");
    class_3b59a0980c80518c808634f7a84dc3cd.def("__next__", method_pointer_03b285991d1f51b1a7d55a3416478017, pybind11::return_value_policy::reference_internal, "");
    class_3b59a0980c80518c808634f7a84dc3cd.def("__next__", autowig::method_decorator_03b285991d1f51b1a7d55a3416478017);
    class_3b59a0980c80518c808634f7a84dc3cd.def("value", method_pointer_622d5f3583fc559fbc94aa6460932250, "");

}