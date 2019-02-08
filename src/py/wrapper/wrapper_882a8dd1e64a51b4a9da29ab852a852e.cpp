#include "_stl.h"

bool  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_058fa01f4c145bf98fda3973c391d4d3)()const= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::empty;
::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_cbe841e3c1415a4c8a3af5085eacba7d)()const= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size;
::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_6dc7e29a084c591a8f32b6d434506b5e)()const= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::max_size;
::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_c7f07f73d454528c9c61d58470fc6eab)(::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::key_type const &)= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::erase;
void  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_60f22e5e25c6596b91b7a0c4e2ce9096)()= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::clear;
::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_24ccee4186dc59b7a356125ca22e9032)(::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::key_type const &)const= &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::count;

namespace autowig {
}

void wrapper_882a8dd1e64a51b4a9da29ab852a852e(pybind11::module& module)
{

    struct function_group
    {
        static ::statiskit::stl::SetLessIntGenerator  function_6d6d99229ac852458068934c0356ebf6(::statiskit::stl::SetLessInt const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_e87550118550563aae499fceec220e2c(::statiskit::stl::SetLessInt & parameter_0, int const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >, autowig::HolderType< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::Type > class_882a8dd1e64a51b4a9da29ab852a852e(module, "_Set_882a8dd1e64a51b4a9da29ab852a852e", "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def(pybind11::init<  >());
    class_882a8dd1e64a51b4a9da29ab852a852e.def(pybind11::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >());
    class_882a8dd1e64a51b4a9da29ab852a852e.def("empty", method_pointer_058fa01f4c145bf98fda3973c391d4d3, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("__len__", method_pointer_cbe841e3c1415a4c8a3af5085eacba7d, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("max_size", method_pointer_6dc7e29a084c591a8f32b6d434506b5e, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("erase", method_pointer_c7f07f73d454528c9c61d58470fc6eab, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("clear", method_pointer_60f22e5e25c6596b91b7a0c4e2ce9096, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("count", method_pointer_24ccee4186dc59b7a356125ca22e9032, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("__iter__", function_group::function_6d6d99229ac852458068934c0356ebf6, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("insert", function_group::function_e87550118550563aae499fceec220e2c, "");

}