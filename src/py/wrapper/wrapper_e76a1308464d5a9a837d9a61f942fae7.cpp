#include "_stl.h"

bool  (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_cb7316f1faaf5e2d8c24760e29e57f27)()const= &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::is_valid;
class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_3433eb819fff55e998cbd8421b3bcb82)()= &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::operator++;
int  (::statiskit::stl::Generator< ::std::set< int, ::std::less< int >, ::std::allocator< int > > >::*method_pointer_e6326c3ac992538d87ced8208ef5d2a6)()const= &::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::value;

namespace autowig {
    void method_decorator_3433eb819fff55e998cbd8421b3bcb82(class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & instance, const class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > & param_out) { instance.operator++() = param_out; }
}

void wrapper_e76a1308464d5a9a837d9a61f942fae7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >, autowig::HolderType< class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > >::Type > class_e76a1308464d5a9a837d9a61f942fae7(module, "_Generator_e76a1308464d5a9a837d9a61f942fae7", "");
    class_e76a1308464d5a9a837d9a61f942fae7.def(pybind11::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >());
    class_e76a1308464d5a9a837d9a61f942fae7.def(pybind11::init< class ::statiskit::stl::Generator< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > > const & >());
    class_e76a1308464d5a9a837d9a61f942fae7.def("is_valid", method_pointer_cb7316f1faaf5e2d8c24760e29e57f27, "");
    class_e76a1308464d5a9a837d9a61f942fae7.def("__next__", method_pointer_3433eb819fff55e998cbd8421b3bcb82, pybind11::return_value_policy::reference_internal, "");
    class_e76a1308464d5a9a837d9a61f942fae7.def("__next__", autowig::method_decorator_3433eb819fff55e998cbd8421b3bcb82);
    class_e76a1308464d5a9a837d9a61f942fae7.def("value", method_pointer_e6326c3ac992538d87ced8208ef5d2a6, "");

}