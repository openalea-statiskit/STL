#include "_stl.h"


namespace autowig
{
}


void wrapper_882a8dd1e64a51b4a9da29ab852a852e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    bool  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_058fa01f4c145bf98fda3973c391d4d3)() const = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::empty;
    ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_cbe841e3c1415a4c8a3af5085eacba7d)() const = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size;
    ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_6dc7e29a084c591a8f32b6d434506b5e)() const = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::max_size;
    ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_c7f07f73d454528c9c61d58470fc6eab)(::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::key_type const &) = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::erase;
    void  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_60f22e5e25c6596b91b7a0c4e2ce9096)() = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::clear;
    ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::size_type  (::std::set< int, ::std::less< int >, ::std::allocator< int > >::*method_pointer_24ccee4186dc59b7a356125ca22e9032)(::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::key_type const &) const = &::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >::count;
    struct function_group
    {
        static ::statiskit::stl::SetLessIntGenerator  function_6d6d99229ac852458068934c0356ebf6(::statiskit::stl::SetLessInt const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_e87550118550563aae499fceec220e2c(::statiskit::stl::SetLessInt & parameter_0, int const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >, autowig::Held< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >::Type > class_882a8dd1e64a51b4a9da29ab852a852e("_Set_882a8dd1e64a51b4a9da29ab852a852e", "", boost::python::no_init);
    class_882a8dd1e64a51b4a9da29ab852a852e.def(boost::python::init<  >(""));
    class_882a8dd1e64a51b4a9da29ab852a852e.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >(""));
    class_882a8dd1e64a51b4a9da29ab852a852e.def("empty", method_pointer_058fa01f4c145bf98fda3973c391d4d3, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("__len__", method_pointer_cbe841e3c1415a4c8a3af5085eacba7d, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("max_size", method_pointer_6dc7e29a084c591a8f32b6d434506b5e, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("erase", method_pointer_c7f07f73d454528c9c61d58470fc6eab, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("clear", method_pointer_60f22e5e25c6596b91b7a0c4e2ce9096, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("count", method_pointer_24ccee4186dc59b7a356125ca22e9032, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("__iter__", function_group::function_6d6d99229ac852458068934c0356ebf6, "");
    class_882a8dd1e64a51b4a9da29ab852a852e.def("insert", function_group::function_e87550118550563aae499fceec220e2c, "");

    struct set_882a8dd1e64a51b4a9da29ab852a852e_from_python
    {
        set_882a8dd1e64a51b4a9da29ab852a852e_from_python()
        {
            boost::python::converter::registry::push_back(
            &convertible,
            &construct,
            boost::python::type_id< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > >*)data)->storage.bytes;
            new (storage) class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >();
            data->convertible = storage;
            class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >& result = *((class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.insert((int )(boost::python::extract< int  >(py_elem_obj)));
            }
        }

    };

    set_882a8dd1e64a51b4a9da29ab852a852e_from_python();
}