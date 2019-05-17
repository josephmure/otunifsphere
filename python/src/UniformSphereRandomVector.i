// SWIG file UniformSphereRandomVector.i

%{
#include "otunifsphere/UniformSphereRandomVector.hxx"
%}

%include UniformSphereRandomVector_doc.i

TypedInterfaceObjectImplementationHelper(OTUNIFSPHERE, UniformSphereRandomVector, UniformSphereRandomVectorImplementation)

%include otunifsphere/UniformSphereRandomVector.hxx
namespace OTUNIFSPHERE { %extend UniformSphereRandomVector { UniformSphereRandomVector(const UniformSphereRandomVector & other) { return new OTUNIFSPHERE::UniformSphereRandomVector(other); } } }
