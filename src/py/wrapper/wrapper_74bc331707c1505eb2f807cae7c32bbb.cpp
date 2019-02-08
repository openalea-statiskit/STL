#include "_stl.h"

bool  (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_344512c24d55594db904f0ba29f2ee0b)()const= &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::is_valid;
class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_6a735131c3895f32adab536c11f36783)()= &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::operator++;
double  (::statiskit::stl::Generator< ::std::set< double, ::std::less< double >, ::std::allocator< double > > >::*method_pointer_3d3f1d6ba56e50029f25e9b295d1fb75)()const= &::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::value;

namespace autowig {
    void method_decorator_6a735131c3895f32adab536c11f36783(class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & instance, const class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > & param_out) { instance.operator++() = param_out; }
}

void wrapper_74bc331707c1505eb2f807cae7c32bbb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >, autowig::HolderType< class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > >::Type > class_74bc331707c1505eb2f807cae7c32bbb(module, "_Generator_74bc331707c1505eb2f807cae7c32bbb", "");
    class_74bc331707c1505eb2f807cae7c32bbb.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >());
    class_74bc331707c1505eb2f807cae7c32bbb.def(pybind11::init< class ::statiskit::stl::Generator< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > > const & >());
    class_74bc331707c1505eb2f807cae7c32bbb.def("is_valid", method_pointer_344512c24d55594db904f0ba29f2ee0b, "");
    class_74bc331707c1505eb2f807cae7c32bbb.def("__next__", method_pointer_6a735131c3895f32adab536c11f36783, pybind11::return_value_policy::reference_internal, "");
    class_74bc331707c1505eb2f807cae7c32bbb.def("__next__", autowig::method_decorator_6a735131c3895f32adab536c11f36783);
    class_74bc331707c1505eb2f807cae7c32bbb.def("value", method_pointer_3d3f1d6ba56e50029f25e9b295d1fb75, "");

}