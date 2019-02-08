#include "_stl.h"

bool  (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_06f825ec70fd53388588a2610095ac20)()const= &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::is_valid;
class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_9ee3d1b710825c39bad8dfdf4db13de4)()= &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::operator++;
unsigned long int  (::statiskit::stl::Generator< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_90c893e125985b459d0576d6cfa0c429)()const= &::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::value;

namespace autowig {
    void method_decorator_9ee3d1b710825c39bad8dfdf4db13de4(class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & instance, const class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > & param_out) { instance.operator++() = param_out; }
}

void wrapper_10b14312eeb655268489cd34090870cf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, autowig::HolderType< class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type > class_10b14312eeb655268489cd34090870cf(module, "_Generator_10b14312eeb655268489cd34090870cf", "");
    class_10b14312eeb655268489cd34090870cf.def(pybind11::init< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & >());
    class_10b14312eeb655268489cd34090870cf.def(pybind11::init< class ::statiskit::stl::Generator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const & >());
    class_10b14312eeb655268489cd34090870cf.def("is_valid", method_pointer_06f825ec70fd53388588a2610095ac20, "");
    class_10b14312eeb655268489cd34090870cf.def("__next__", method_pointer_9ee3d1b710825c39bad8dfdf4db13de4, pybind11::return_value_policy::reference_internal, "");
    class_10b14312eeb655268489cd34090870cf.def("__next__", autowig::method_decorator_9ee3d1b710825c39bad8dfdf4db13de4);
    class_10b14312eeb655268489cd34090870cf.def("value", method_pointer_90c893e125985b459d0576d6cfa0c429, "");

}