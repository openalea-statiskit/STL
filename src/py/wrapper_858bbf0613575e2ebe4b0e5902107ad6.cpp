#include "_stl.h"


namespace autowig
{
}


void wrapper_858bbf0613575e2ebe4b0e5902107ad6()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_compare  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_e2f6120de6835419a624cb4a1d18b521)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_comp;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::value_compare  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_3be34a51ad7f5cae939bb244d51836e7)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::value_comp;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::allocator_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_d2ea25a2517e5279b777100505197e28)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::get_allocator;
    bool  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_ebd24ba22b5a57ba98343f75023d77a0)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::empty;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_8ae51fee6ed45f33acf4a1926506397b)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_7153735b781d505b9146233becb01637)() const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::max_size;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_3b8d68ccc39d5592a2ce2b25aeec2516)(::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_type const &) = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::erase;
    void  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_52dab5b0978456aa9d00eb760b635f03)() = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::clear;
    ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::size_type  (::std::set< double, ::std::less< double >, ::std::allocator< double > >::*method_pointer_4d624c7e98c054ad937392978d9dbd31)(::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::key_type const &) const = &::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::count;
    struct function_group
    {
        static ::statiskit::stl::SetLessDoubleGenerator  function_e2d89d727bb55c85a14e5778e924d099(::statiskit::stl::SetLessDouble const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_992b8adef62d5217a35458a6c04194e7(::statiskit::stl::SetLessDouble & parameter_0, double const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >, autowig::Held< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >::Type > class_858bbf0613575e2ebe4b0e5902107ad6("_Set_858bbf0613575e2ebe4b0e5902107ad6", "", boost::python::no_init);
    class_858bbf0613575e2ebe4b0e5902107ad6.def(boost::python::init<  >(""));
    class_858bbf0613575e2ebe4b0e5902107ad6.def(boost::python::init< struct ::std::less< double > const &, ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::allocator_type const & >(""));
    class_858bbf0613575e2ebe4b0e5902107ad6.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >(""));
    class_858bbf0613575e2ebe4b0e5902107ad6.def(boost::python::init< ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::allocator_type const & >(""));
    class_858bbf0613575e2ebe4b0e5902107ad6.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >::allocator_type const & >(""));
    class_858bbf0613575e2ebe4b0e5902107ad6.def("key_comp", method_pointer_e2f6120de6835419a624cb4a1d18b521, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("value_comp", method_pointer_3be34a51ad7f5cae939bb244d51836e7, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("get_allocator", method_pointer_d2ea25a2517e5279b777100505197e28, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("empty", method_pointer_ebd24ba22b5a57ba98343f75023d77a0, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("__len__", method_pointer_8ae51fee6ed45f33acf4a1926506397b, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("max_size", method_pointer_7153735b781d505b9146233becb01637, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("erase", method_pointer_3b8d68ccc39d5592a2ce2b25aeec2516, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("clear", method_pointer_52dab5b0978456aa9d00eb760b635f03, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("count", method_pointer_4d624c7e98c054ad937392978d9dbd31, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("__iter__", function_group::function_e2d89d727bb55c85a14e5778e924d099, "");
    class_858bbf0613575e2ebe4b0e5902107ad6.def("insert", function_group::function_992b8adef62d5217a35458a6c04194e7, "");

    struct set_858bbf0613575e2ebe4b0e5902107ad6_from_python
    {
        set_858bbf0613575e2ebe4b0e5902107ad6_from_python()
        {
            boost::python::converter::registry::push_back(
            &convertible,
            &construct,
            boost::python::type_id< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > >*)data)->storage.bytes;
            new (storage) class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >();
            data->convertible = storage;
            class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >& result = *((class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.insert((double )(boost::python::extract< double  >(py_elem_obj)));
            }
        }

    };

    set_858bbf0613575e2ebe4b0e5902107ad6_from_python();
}