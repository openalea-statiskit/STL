#include "_stl.h"


namespace autowig {
}

void wrapper_448c20257e485acda59dc59305fceb58(pybind11::module& module)
{

    struct function_group
    {
        static bool  function_dedc883c74cd58daabc2a47c4db2d465(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & parameter_0, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, autowig::HolderType< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >::Type > class_448c20257e485acda59dc59305fceb58(module, "_BasicString_448c20257e485acda59dc59305fceb58", "");
    class_448c20257e485acda59dc59305fceb58.def(pybind11::init<  >());
    class_448c20257e485acda59dc59305fceb58.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >());
    class_448c20257e485acda59dc59305fceb58.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >::size_type , ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >::size_type  >());
    class_448c20257e485acda59dc59305fceb58.def("__lt__", function_group::function_dedc883c74cd58daabc2a47c4db2d465, "");
    class_448c20257e485acda59dc59305fceb58.def_readonly_static("npos", &::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >::npos, "");

}