#include "_stl.h"

bool  (::std::equal_to< unsigned long int >::*method_pointer_096db2c8a9775702bd7119d2d5b8e22d)(unsigned long int const &, unsigned long int const &)const= &::std::equal_to< unsigned long int >::operator();

namespace autowig {
}

void wrapper_d0ba0922f2505f7b8e291326cad79af5(pybind11::module& module)
{

    pybind11::class_<struct ::std::equal_to< unsigned long int >, autowig::HolderType< struct ::std::equal_to< unsigned long int > >::Type, struct ::std::binary_function< unsigned long int, unsigned long int, bool > > class_d0ba0922f2505f7b8e291326cad79af5(module, "_EqualTo_d0ba0922f2505f7b8e291326cad79af5", "");
    class_d0ba0922f2505f7b8e291326cad79af5.def(pybind11::init<  >());
    class_d0ba0922f2505f7b8e291326cad79af5.def(pybind11::init< struct ::std::equal_to< unsigned long int > const & >());
    class_d0ba0922f2505f7b8e291326cad79af5.def("__call__", method_pointer_096db2c8a9775702bd7119d2d5b8e22d, "");

}