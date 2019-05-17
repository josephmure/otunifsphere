// SWIG file UniformSphereRandomVector.i

%{
#include "otunifsphere/UniformSphereRandomVector.hxx"
%}

%include UniformSphereRandomVector_doc.i

%include otunifsphere/UniformSphereRandomVector.hxx
namespace OTUNIFSPHERE { %extend UniformSphereRandomVector { UniformSphereRandomVector(const UniformSphereRandomVector & other) { return new OTUNIFSPHERE::UniformSphereRandomVector(other); } } }
