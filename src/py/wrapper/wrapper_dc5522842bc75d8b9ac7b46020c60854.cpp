#include "_stl.h"

void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_89c7276268985aa9aa70e2708595ca51)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type , ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::value_type const &)= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::assign;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_93bd870129e65bff9e6613a8c99ebd30)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_7fc7ec46b771522b996aeb9c2011fb9a)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::max_size;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_189a23bed172530c83541b067beecd92)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::capacity;
bool  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_e838155cd2c95a5fa788e0fada4ba5a5)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::empty;
void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_2b86687b917653c09e713461e46147c7)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type )= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reserve;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_8b88bc9a239b540fa395d739eae16a55)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type )= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::at;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::const_reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_0eed4febb76e5a0ab1702eb1a5b96f62)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type )const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::at;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_5b1d5ac22ef65a55906e5618a3254023)()= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::front;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::const_reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_dcc61d05a0c4503aa88484f38f0b1673)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::front;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_7abbcd1bb584526dbd128179d2ba2286)()= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::back;
::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::const_reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_0b9e1e10bf7558ac845cf8e01945761a)()const= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::back;
void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_1831c4e555a85d79b02f395ea0d2ef8b)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::value_type const &)= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::push_back;
void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_61ee38214357548bb16f9cbf1e295576)()= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::pop_back;
void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_305afc5bb4f352b5a6a1a38f088f96ff)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > &)= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::swap;
void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_7ddf26a68f7e58bda61527afe20e9b00)()= &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::clear;

namespace autowig {
    void method_decorator_8b88bc9a239b540fa395d739eae16a55(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > & instance, ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::size_type  param_in_0, unsigned long int param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_5b1d5ac22ef65a55906e5618a3254023(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > & instance, unsigned long int param_out) { instance.front() = param_out; }
    void method_decorator_7abbcd1bb584526dbd128179d2ba2286(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > & instance, unsigned long int param_out) { instance.back() = param_out; }
}

void wrapper_dc5522842bc75d8b9ac7b46020c60854(pybind11::module& module)
{

    pybind11::class_<class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >, autowig::HolderType< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > >::Type > class_dc5522842bc75d8b9ac7b46020c60854(module, "_Vector_dc5522842bc75d8b9ac7b46020c60854", "");
    class_dc5522842bc75d8b9ac7b46020c60854.def(pybind11::init<  >());
    class_dc5522842bc75d8b9ac7b46020c60854.def(pybind11::init< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & >());
    class_dc5522842bc75d8b9ac7b46020c60854.def("assign", method_pointer_89c7276268985aa9aa70e2708595ca51, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("__len__", method_pointer_93bd870129e65bff9e6613a8c99ebd30, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("max_size", method_pointer_7fc7ec46b771522b996aeb9c2011fb9a, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("capacity", method_pointer_189a23bed172530c83541b067beecd92, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("empty", method_pointer_e838155cd2c95a5fa788e0fada4ba5a5, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("reserve", method_pointer_2b86687b917653c09e713461e46147c7, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("at", method_pointer_8b88bc9a239b540fa395d739eae16a55, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("at", autowig::method_decorator_8b88bc9a239b540fa395d739eae16a55);
    class_dc5522842bc75d8b9ac7b46020c60854.def("at", method_pointer_0eed4febb76e5a0ab1702eb1a5b96f62, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", method_pointer_5b1d5ac22ef65a55906e5618a3254023, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", autowig::method_decorator_5b1d5ac22ef65a55906e5618a3254023);
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", method_pointer_dcc61d05a0c4503aa88484f38f0b1673, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", method_pointer_7abbcd1bb584526dbd128179d2ba2286, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", autowig::method_decorator_7abbcd1bb584526dbd128179d2ba2286);
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", method_pointer_0b9e1e10bf7558ac845cf8e01945761a, pybind11::return_value_policy::copy, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("push_back", method_pointer_1831c4e555a85d79b02f395ea0d2ef8b, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("pop_back", method_pointer_61ee38214357548bb16f9cbf1e295576, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("swap", method_pointer_305afc5bb4f352b5a6a1a38f088f96ff, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("clear", method_pointer_7ddf26a68f7e58bda61527afe20e9b00, "");

}