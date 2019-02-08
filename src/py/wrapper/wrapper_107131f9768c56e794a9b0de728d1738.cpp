#include "_stl.h"

void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_3fcbcdd89dc951b39073e310b61a04e9)(::std::vector< double, class ::std::allocator< double > >::size_type , ::std::vector< double, class ::std::allocator< double > >::value_type const &)= &::std::vector< double, class ::std::allocator< double > >::assign;
::std::vector< double, class ::std::allocator< double > >::size_type  (::std::vector< double, ::std::allocator< double > >::*method_pointer_2762c9c3801851f798933620de2a38c5)()const= &::std::vector< double, class ::std::allocator< double > >::size;
::std::vector< double, class ::std::allocator< double > >::size_type  (::std::vector< double, ::std::allocator< double > >::*method_pointer_441a8fd7a6105f52ab269c45a59d8985)()const= &::std::vector< double, class ::std::allocator< double > >::max_size;
::std::vector< double, class ::std::allocator< double > >::size_type  (::std::vector< double, ::std::allocator< double > >::*method_pointer_5c9706119c135c8ca0dbcadbab171935)()const= &::std::vector< double, class ::std::allocator< double > >::capacity;
bool  (::std::vector< double, ::std::allocator< double > >::*method_pointer_fbb341f4fc855b39aa2eeb3c29aefdd1)()const= &::std::vector< double, class ::std::allocator< double > >::empty;
void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_56d1f2045f5952b983dea94ad5c12052)(::std::vector< double, class ::std::allocator< double > >::size_type )= &::std::vector< double, class ::std::allocator< double > >::reserve;
::std::vector< double, class ::std::allocator< double > >::reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_beaa574a87dd59068311360e573c777c)(::std::vector< double, class ::std::allocator< double > >::size_type )= &::std::vector< double, class ::std::allocator< double > >::at;
::std::vector< double, class ::std::allocator< double > >::const_reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_25da210bb3c75c269af3895505a003fd)(::std::vector< double, class ::std::allocator< double > >::size_type )const= &::std::vector< double, class ::std::allocator< double > >::at;
::std::vector< double, class ::std::allocator< double > >::reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_22f52ccf4b785404ada1e9bcb9fa01aa)()= &::std::vector< double, class ::std::allocator< double > >::front;
::std::vector< double, class ::std::allocator< double > >::const_reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_fb2421b769975570ac8387adada3a0b2)()const= &::std::vector< double, class ::std::allocator< double > >::front;
::std::vector< double, class ::std::allocator< double > >::reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_cae6ded0197f5723954a48c02008c60c)()= &::std::vector< double, class ::std::allocator< double > >::back;
::std::vector< double, class ::std::allocator< double > >::const_reference  (::std::vector< double, ::std::allocator< double > >::*method_pointer_e34e38388a585de3aaa97622256cd858)()const= &::std::vector< double, class ::std::allocator< double > >::back;
void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_f6adc78c87285d669260e4289dd02852)(::std::vector< double, class ::std::allocator< double > >::value_type const &)= &::std::vector< double, class ::std::allocator< double > >::push_back;
void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_0d34433fdbe7506180094ce87fae6cab)()= &::std::vector< double, class ::std::allocator< double > >::pop_back;
void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_331520d5c9a25683a40120b524320d20)(class ::std::vector< double, class ::std::allocator< double > > &)= &::std::vector< double, class ::std::allocator< double > >::swap;
void  (::std::vector< double, ::std::allocator< double > >::*method_pointer_a4208670622158c3a2376d15176ceee2)()= &::std::vector< double, class ::std::allocator< double > >::clear;

namespace autowig {
    void method_decorator_beaa574a87dd59068311360e573c777c(class ::std::vector< double, class ::std::allocator< double > > & instance, ::std::vector< double, class ::std::allocator< double > >::size_type  param_in_0, double param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_22f52ccf4b785404ada1e9bcb9fa01aa(class ::std::vector< double, class ::std::allocator< double > > & instance, double param_out) { instance.front() = param_out; }
    void method_decorator_cae6ded0197f5723954a48c02008c60c(class ::std::vector< double, class ::std::allocator< double > > & instance, double param_out) { instance.back() = param_out; }
}

void wrapper_107131f9768c56e794a9b0de728d1738(pybind11::module& module)
{

    pybind11::class_<class ::std::vector< double, class ::std::allocator< double > >, autowig::HolderType< class ::std::vector< double, class ::std::allocator< double > > >::Type > class_107131f9768c56e794a9b0de728d1738(module, "_Vector_107131f9768c56e794a9b0de728d1738", "");
    class_107131f9768c56e794a9b0de728d1738.def(pybind11::init<  >());
    class_107131f9768c56e794a9b0de728d1738.def(pybind11::init< class ::std::vector< double, class ::std::allocator< double > > const & >());
    class_107131f9768c56e794a9b0de728d1738.def("assign", method_pointer_3fcbcdd89dc951b39073e310b61a04e9, "");
    class_107131f9768c56e794a9b0de728d1738.def("__len__", method_pointer_2762c9c3801851f798933620de2a38c5, "");
    class_107131f9768c56e794a9b0de728d1738.def("max_size", method_pointer_441a8fd7a6105f52ab269c45a59d8985, "");
    class_107131f9768c56e794a9b0de728d1738.def("capacity", method_pointer_5c9706119c135c8ca0dbcadbab171935, "");
    class_107131f9768c56e794a9b0de728d1738.def("empty", method_pointer_fbb341f4fc855b39aa2eeb3c29aefdd1, "");
    class_107131f9768c56e794a9b0de728d1738.def("reserve", method_pointer_56d1f2045f5952b983dea94ad5c12052, "");
    class_107131f9768c56e794a9b0de728d1738.def("at", method_pointer_beaa574a87dd59068311360e573c777c, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("at", autowig::method_decorator_beaa574a87dd59068311360e573c777c);
    class_107131f9768c56e794a9b0de728d1738.def("at", method_pointer_25da210bb3c75c269af3895505a003fd, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("front", method_pointer_22f52ccf4b785404ada1e9bcb9fa01aa, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("front", autowig::method_decorator_22f52ccf4b785404ada1e9bcb9fa01aa);
    class_107131f9768c56e794a9b0de728d1738.def("front", method_pointer_fb2421b769975570ac8387adada3a0b2, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("back", method_pointer_cae6ded0197f5723954a48c02008c60c, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("back", autowig::method_decorator_cae6ded0197f5723954a48c02008c60c);
    class_107131f9768c56e794a9b0de728d1738.def("back", method_pointer_e34e38388a585de3aaa97622256cd858, pybind11::return_value_policy::copy, "");
    class_107131f9768c56e794a9b0de728d1738.def("push_back", method_pointer_f6adc78c87285d669260e4289dd02852, "");
    class_107131f9768c56e794a9b0de728d1738.def("pop_back", method_pointer_0d34433fdbe7506180094ce87fae6cab, "");
    class_107131f9768c56e794a9b0de728d1738.def("swap", method_pointer_331520d5c9a25683a40120b524320d20, "");
    class_107131f9768c56e794a9b0de728d1738.def("clear", method_pointer_a4208670622158c3a2376d15176ceee2, "");

}