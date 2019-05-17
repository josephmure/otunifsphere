// SWIG file otunifsphere_module.i

%module(docstring="otunifsphere module") otunifsphere

%{
#include <openturns/OT.hxx>
#include <openturns/PythonWrappingFunctions.hxx>
%}

// Prerequisites needed
%include typemaps.i
%include exception.i
%ignore *::load(OT::Advocate & adv);
%ignore *::save(OT::Advocate & adv) const;

%import base_module.i
%import uncertainty_module.i

// The new classes
%include otunifsphere/otunifsphereprivate.hxx
%include UniformSphereRandomVector.i


