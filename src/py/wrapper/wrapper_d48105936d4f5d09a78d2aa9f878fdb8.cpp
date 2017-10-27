#include "_stl.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile * get_pointer<class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile >(class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d48105936d4f5d09a78d2aa9f878fdb8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    bool  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_5d86a2157b38591aa7aa7f170737a2f5)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::empty;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_017184a1575a5f6da6c6c4c71655f2a1)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_91370ee25b8a5009add3646f05018592)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::max_size;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_886b9a55ac5a5ca1b8c8f55f32c4e395)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::key_type const &) = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::erase;
    void  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_e26c2421121d551999de08769c696430)() = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::clear;
    void  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_df95aee8b67f50f8b046f2b28d1c3945)(class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > &) = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::swap;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::key_equal  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_77a3a1a01d4b54e4b019d097065cfe7b)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::key_eq;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_8203cac716765a65a6bb9b08b709aa86)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::key_type const &) const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::count;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_37d6ce295b2853c289ac2cb5fc2dcb0a)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::bucket_count;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_8d1fab376d4d5fbd8898c84eef13fdaf)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::max_bucket_count;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_672996e839605784b88b7dbf03e3f3a6)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type ) const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::bucket_size;
    ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_3d1a0a7f80c05a85a0b68c3178fa5c19)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::key_type const &) const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::bucket;
    float  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_625537ad3b3d55bc86dd23d0e8013e6a)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::load_factor;
    float  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_a3614b36b4f254b1bf242282cea99045)() const = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::max_load_factor;
    void  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_a5783dc0a6f35a12844fa4840d93649f)(float ) = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::max_load_factor;
    void  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_23e336dddac55dae87875daaa1a008b3)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type ) = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::rehash;
    void  (::std::unordered_set< unsigned long int, ::std::hash< unsigned long int >, ::std::equal_to< unsigned long int >, ::std::allocator< unsigned long int > >::*method_pointer_6e2e742b02c256a7a9bb1c1ef24c88a5)(::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::size_type ) = &::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >::reserve;
    struct function_group
    {
        static ::statiskit::stl::SetIndexGenerator  function_5dd3780a339f5b1cbec763acd3e8e1ba(::statiskit::stl::SetIndex const & parameter_0)
        { return ::statiskit::stl::generator(parameter_0); }
        static bool  function_2415ef713cd55e4cb7d79ffd117bdd69(::statiskit::stl::SetIndex & parameter_0, ::statiskit::Index const & parameter_1)
        { return ::statiskit::stl::insert(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >, autowig::Held< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > >::Type > class_d48105936d4f5d09a78d2aa9f878fdb8("_UnorderedSet_d48105936d4f5d09a78d2aa9f878fdb8", "", boost::python::no_init);
    class_d48105936d4f5d09a78d2aa9f878fdb8.def(boost::python::init<  >(""));
    class_d48105936d4f5d09a78d2aa9f878fdb8.def(boost::python::init< class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > > const & >(""));
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("empty", method_pointer_5d86a2157b38591aa7aa7f170737a2f5, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("__len__", method_pointer_017184a1575a5f6da6c6c4c71655f2a1, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("max_size", method_pointer_91370ee25b8a5009add3646f05018592, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("erase", method_pointer_886b9a55ac5a5ca1b8c8f55f32c4e395, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("clear", method_pointer_e26c2421121d551999de08769c696430, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("swap", method_pointer_df95aee8b67f50f8b046f2b28d1c3945, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("key_eq", method_pointer_77a3a1a01d4b54e4b019d097065cfe7b, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("count", method_pointer_8203cac716765a65a6bb9b08b709aa86, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("bucket_count", method_pointer_37d6ce295b2853c289ac2cb5fc2dcb0a, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("max_bucket_count", method_pointer_8d1fab376d4d5fbd8898c84eef13fdaf, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("bucket_size", method_pointer_672996e839605784b88b7dbf03e3f3a6, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("bucket", method_pointer_3d1a0a7f80c05a85a0b68c3178fa5c19, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("load_factor", method_pointer_625537ad3b3d55bc86dd23d0e8013e6a, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("max_load_factor", method_pointer_a3614b36b4f254b1bf242282cea99045, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("max_load_factor", method_pointer_a5783dc0a6f35a12844fa4840d93649f, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("rehash", method_pointer_23e336dddac55dae87875daaa1a008b3, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("reserve", method_pointer_6e2e742b02c256a7a9bb1c1ef24c88a5, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("__iter__", function_group::function_5dd3780a339f5b1cbec763acd3e8e1ba, "");
    class_d48105936d4f5d09a78d2aa9f878fdb8.def("insert", function_group::function_2415ef713cd55e4cb7d79ffd117bdd69, "");

}