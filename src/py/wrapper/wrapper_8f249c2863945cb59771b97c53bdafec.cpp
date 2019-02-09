#include "_stl.h"


namespace autowig {
}

void wrapper_8f249c2863945cb59771b97c53bdafec(pybind11::module& module)
{

    pybind11::class_<struct ::std::binary_function< unsigned long int, unsigned long int, bool >, autowig::HolderType< struct ::std::binary_function< unsigned long int, unsigned long int, bool > >::Type > class_8f249c2863945cb59771b97c53bdafec(module, "_BinaryFunction_8f249c2863945cb59771b97c53bdafec", "");
    class_8f249c2863945cb59771b97c53bdafec.def(pybind11::init< struct ::std::binary_function< unsigned long int, unsigned long int, bool > const & >());
    class_8f249c2863945cb59771b97c53bdafec.def(pybind11::init<  >());

}