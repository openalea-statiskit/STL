import autowig
import itertools

def controller(asg):
    autowig.controller.plugin = 'default'
    asg = autowig.controller(asg)
    for function in asg['::statiskit::stl'].functions():
        if function.localname in ['generator', 'insert']:
            parameter = function.parameters[0].qualified_type.desugared_type
            if parameter.is_class:
                function.parent = parameter.unqualified_type
    for cls in asg['class ::std::vector'].specializations():
        for method in cls.methods():
            if method.localname in ['resize', 'shrink_to_fit', 'operator[]']:
                if isinstance(method.boost_python_export, bool):
                    method.boost_python_export = False
        for constructor in cls.constructors():
            if not(constructor.nb_parameters == 0 or constructor.nb_parameters == 1 and constructor.parameters[0].qualified_type.unqualified_type == cls):
                if isinstance(constructor.boost_python_export, bool):
                    constructor.boost_python_export = False
    for cls in asg['class ::std::set'].specializations():
        for method in cls.methods():
            if method.localname in ['swap', 'key_comp', 'value_comp', 'get_allocator']:
                if isinstance(method.boost_python_export, bool):
                    method.boost_python_export = False
        for constructor in cls.constructors():
            if not(constructor.nb_parameters == 0 or constructor.nb_parameters == 1 and constructor.parameters[0].qualified_type.unqualified_type == cls):
                if isinstance(constructor.boost_python_export, bool):
                    constructor.boost_python_export = False
    for cls in asg['class ::std::less'].specializations():
        cls.boost_python_export = False
    for cls in asg['class ::std::allocator'].specializations():
        cls.boost_python_export = False
    if 'class ::std::reverse_iterator' in asg:
        for cls in asg['class ::std::reverse_iterator'].specializations():
            cls.boost_python_export = False
    if 'class ::std::initializer_list' in asg:
        for cls in asg['class ::std::initializer_list'].specializations():
            cls.boost_python_export = False
    if 'class ::std::default_delete' in asg:
        for cls in asg['class ::std::default_delete'].specializations():
            cls.boost_python_export = False
    return asg

def generator(asg, module, decorator):
    autowig.generator.plugin = 'boost_python'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::stl'].typedefs()] + asg['class ::std::basic_string'].specializations()
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::stl'].declarations()
    return autowig.generator(asg, nodes, module=module,
                             decorator=decorator,
                             closure=False,
                             helder='std::shared_ptr')
