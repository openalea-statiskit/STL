#include "_stl.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile * get_pointer<class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile >(class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_476c1c1f206251dba7af53c48f3f6e42()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    bool  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_090f703b180d5d00850b247fd88fc641)() const = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::empty;
    ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_54317bd9395755a284b9f20c9142dcc8)() const = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::size;
    ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_ae6c59cafc7e5ae39d538e3dd828f03c)() const = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::max_size;
    ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_7b38232cb48b525a86fdbd64579aab23)(::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::key_type const &) = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::erase;
    void  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_b17af8c2f62e58eda931b314ca0992ce)() = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::clear;
    ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_a8588ce6ea305ba5ab184a11728e1689)(::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::key_type const &) const = &::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >::count;
    struct function_group
    {
        static ::statiskit::stl::SetLessIndexGenerator  function_642e9bdbcd3d597b98c523340e8a23c1(::statiskit::stl::SetLessIndex const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_9beed4b3db865b0b9ea9906f3488f3da(::statiskit::stl::SetLessIndex & parameter_0, ::statiskit::Index const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, autowig::Held< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::Type > class_476c1c1f206251dba7af53c48f3f6e42("_Set_476c1c1f206251dba7af53c48f3f6e42", "", boost::python::no_init);
    class_476c1c1f206251dba7af53c48f3f6e42.def(boost::python::init<  >(""));
    class_476c1c1f206251dba7af53c48f3f6e42.def(boost::python::init< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & >(""));
    class_476c1c1f206251dba7af53c48f3f6e42.def("empty", method_pointer_090f703b180d5d00850b247fd88fc641, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("__len__", method_pointer_54317bd9395755a284b9f20c9142dcc8, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("max_size", method_pointer_ae6c59cafc7e5ae39d538e3dd828f03c, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("erase", method_pointer_7b38232cb48b525a86fdbd64579aab23, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("clear", method_pointer_b17af8c2f62e58eda931b314ca0992ce, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("count", method_pointer_a8588ce6ea305ba5ab184a11728e1689, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("__iter__", function_group::function_642e9bdbcd3d597b98c523340e8a23c1, "");
    class_476c1c1f206251dba7af53c48f3f6e42.def("insert", function_group::function_9beed4b3db865b0b9ea9906f3488f3da, "");

    struct set_476c1c1f206251dba7af53c48f3f6e42_from_python
    {
        set_476c1c1f206251dba7af53c48f3f6e42_from_python()
        {
            boost::python::converter::registry::push_back(
            &convertible,
            &construct,
            boost::python::type_id< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >*)data)->storage.bytes;
            new (storage) class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >();
            data->convertible = storage;
            class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >& result = *((class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.insert((unsigned long int )(boost::python::extract< unsigned long int  >(py_elem_obj)));
            }
        }

    };

    set_476c1c1f206251dba7af53c48f3f6e42_from_python();
}