import os
import autowig
import sys
import pickle
import itertools
import subprocess

asg = autowig.AbstractSemanticGraph()

asg = autowig.parser(asg, [os.path.join(sys.prefix, 'include', 'statiskit', 'stl', 'STL.h')],
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)

asg = autowig.controller(asg)

def stl_refactoring(asg):
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
    return asg

asg = stl_refactoring(asg)

autowig.generator.plugin = 'boost_python'
nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::stl'].typedefs()]
nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::stl'].declarations()
wrappers = autowig.generator(asg, nodes, module='src/py/_stl.cpp',
                                         decorator='src/py/statiskit/stl/_stl.py',
                                         closure=False,
                                         helder='std::shared_ptr')
wrappers.write()

s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
out, err = s.communicate()

autowig.feedback.plugin = 'edit'
codes = []
while not codes or codes[-1].strip():
    codes.append(autowig.feedback(err, '.', asg, variant_dir='build',
                                                  src_dir='src'))
    if codes[-1]:
        exec(codes[-1], locals())
        wrappers.write()
        s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
        out, err = s.communicate()
    if len(codes) > 2:
        if codes[-1] == codes[-2]:
            break

autowig.feedback.plugin = 'comment'
for i in range(1):
    curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
    s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
    out, err = s.communicate()

with open('ASG.pkl', 'w') as filehandler:
    pickle.dump(asg, filehandler)