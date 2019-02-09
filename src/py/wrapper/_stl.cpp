#include "_stl.h"

void wrapper_10b14312eeb655268489cd34090870cf(pybind11::module& module);
void wrapper_3b59a0980c80518c808634f7a84dc3cd(pybind11::module& module);
void wrapper_448c20257e485acda59dc59305fceb58(pybind11::module& module);
void wrapper_476c1c1f206251dba7af53c48f3f6e42(pybind11::module& module);
void wrapper_6436891c9b6854f494789a812891cbe5(pybind11::module& module);
void wrapper_745e4933f5b250d9bc5232fe864d0cf7(pybind11::module& module);
void wrapper_74bc331707c1505eb2f807cae7c32bbb(pybind11::module& module);
void wrapper_858bbf0613575e2ebe4b0e5902107ad6(pybind11::module& module);
void wrapper_882a8dd1e64a51b4a9da29ab852a852e(pybind11::module& module);
void wrapper_d48105936d4f5d09a78d2aa9f878fdb8(pybind11::module& module);
void wrapper_e76a1308464d5a9a837d9a61f942fae7(pybind11::module& module);
void wrapper_107131f9768c56e794a9b0de728d1738(pybind11::module& module);
void wrapper_6b9ae5eac40858c9a0f5e6e21c15d1d3(pybind11::module& module);
void wrapper_c047f2c3135554ceb57f166fd404cfc8(pybind11::module& module);
void wrapper_dc5522842bc75d8b9ac7b46020c60854(pybind11::module& module);

PYBIND11_MODULE(__stl, module_9b5d0e83426e59fe8644dee679bc9dc1)
{

    pybind11::module module_a5e4e9231d6351ccb0e06756b389f0af = module_9b5d0e83426e59fe8644dee679bc9dc1.def_submodule("std", "");
    pybind11::module module_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_9b5d0e83426e59fe8644dee679bc9dc1.def_submodule("statiskit", "");
    pybind11::module module_f1ab29faa1815285a06ca52391d1425f = module_fa414b05d29e5f4ea0b6d6cb5cf81b01.def_submodule("stl", "");
    wrapper_10b14312eeb655268489cd34090870cf(module_f1ab29faa1815285a06ca52391d1425f);
    wrapper_3b59a0980c80518c808634f7a84dc3cd(module_f1ab29faa1815285a06ca52391d1425f);
    wrapper_448c20257e485acda59dc59305fceb58(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_476c1c1f206251dba7af53c48f3f6e42(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_6436891c9b6854f494789a812891cbe5(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_745e4933f5b250d9bc5232fe864d0cf7(module_f1ab29faa1815285a06ca52391d1425f);
    wrapper_74bc331707c1505eb2f807cae7c32bbb(module_f1ab29faa1815285a06ca52391d1425f);
    wrapper_858bbf0613575e2ebe4b0e5902107ad6(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_882a8dd1e64a51b4a9da29ab852a852e(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_d48105936d4f5d09a78d2aa9f878fdb8(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_e76a1308464d5a9a837d9a61f942fae7(module_f1ab29faa1815285a06ca52391d1425f);
    wrapper_107131f9768c56e794a9b0de728d1738(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_6b9ae5eac40858c9a0f5e6e21c15d1d3(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_c047f2c3135554ceb57f166fd404cfc8(module_a5e4e9231d6351ccb0e06756b389f0af);
    wrapper_dc5522842bc75d8b9ac7b46020c60854(module_a5e4e9231d6351ccb0e06756b389f0af);
}