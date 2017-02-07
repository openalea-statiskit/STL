#include "_stl.h"


namespace autowig
{
    void method_decorator_5b1d5ac22ef65a55906e5618a3254023(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > & instance, const ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  param_out)     { instance.front() = param_out; }
    void method_decorator_7abbcd1bb584526dbd128179d2ba2286(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > & instance, const ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  param_out)     { instance.back() = param_out; }
}


void wrapper_dc5522842bc75d8b9ac7b46020c60854()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_c0c8b8853ad752ddbb226a54d7a76c8b)() = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::shrink_to_fit;
    bool  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_e838155cd2c95a5fa788e0fada4ba5a5)() const = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::empty;
    ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_5b1d5ac22ef65a55906e5618a3254023)() = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::front;
    ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::const_reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_dcc61d05a0c4503aa88484f38f0b1673)() const = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::front;
    ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_7abbcd1bb584526dbd128179d2ba2286)() = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::back;
    ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::const_reference  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_0b9e1e10bf7558ac845cf8e01945761a)() const = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::back;
    void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_1831c4e555a85d79b02f395ea0d2ef8b)(::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::value_type const &) = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::push_back;
    void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_61ee38214357548bb16f9cbf1e295576)() = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::pop_back;
    void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_305afc5bb4f352b5a6a1a38f088f96ff)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > &) = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::swap;
    void  (::std::vector< unsigned long int, ::std::allocator< unsigned long int > >::*method_pointer_7ddf26a68f7e58bda61527afe20e9b00)() = &::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::clear;
    boost::python::class_< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >, autowig::Held< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > >::Type > class_dc5522842bc75d8b9ac7b46020c60854("_Vector_dc5522842bc75d8b9ac7b46020c60854", "", boost::python::no_init);
    class_dc5522842bc75d8b9ac7b46020c60854.def(boost::python::init<  >(""));
    class_dc5522842bc75d8b9ac7b46020c60854.def(boost::python::init< ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::allocator_type const & >(""));
    class_dc5522842bc75d8b9ac7b46020c60854.def(boost::python::init< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & >(""));
    class_dc5522842bc75d8b9ac7b46020c60854.def(boost::python::init< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &, ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >::allocator_type const & >(""));
    class_dc5522842bc75d8b9ac7b46020c60854.def("shrink_to_fit", method_pointer_c0c8b8853ad752ddbb226a54d7a76c8b, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("empty", method_pointer_e838155cd2c95a5fa788e0fada4ba5a5, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", method_pointer_5b1d5ac22ef65a55906e5618a3254023, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", autowig::method_decorator_5b1d5ac22ef65a55906e5618a3254023);
    class_dc5522842bc75d8b9ac7b46020c60854.def("front", method_pointer_dcc61d05a0c4503aa88484f38f0b1673, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", method_pointer_7abbcd1bb584526dbd128179d2ba2286, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", autowig::method_decorator_7abbcd1bb584526dbd128179d2ba2286);
    class_dc5522842bc75d8b9ac7b46020c60854.def("back", method_pointer_0b9e1e10bf7558ac845cf8e01945761a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("push_back", method_pointer_1831c4e555a85d79b02f395ea0d2ef8b, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("pop_back", method_pointer_61ee38214357548bb16f9cbf1e295576, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("swap", method_pointer_305afc5bb4f352b5a6a1a38f088f96ff, "");
    class_dc5522842bc75d8b9ac7b46020c60854.def("clear", method_pointer_7ddf26a68f7e58bda61527afe20e9b00, "");

    struct vector_dc5522842bc75d8b9ac7b46020c60854_from_python
    {
        vector_dc5522842bc75d8b9ac7b46020c60854_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >();
            data->convertible = storage;
            class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >& result = *((class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back((unsigned long int )(boost::python::extract< unsigned long int  >(py_elem_obj)));
            }
        }
    };

    vector_dc5522842bc75d8b9ac7b46020c60854_from_python();
}