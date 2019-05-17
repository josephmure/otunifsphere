// SWIG file UniformSphereRandomVectorImplementation.i

%{
#include "otunifsphere/UniformSphereRandomVectorImplementation.hxx"
%}

%include UniformSphereRandomVectorImplementation_doc.i

%template(UniformSphereRandomVectorImplementationdInterfaceObject)           OT::TypedInterfaceObject<OTUNIFSPHERE::UniformSphereRandomVectorImplementation>;

%include otunifsphere/UniformSphereRandomVectorImplementation.hxx
namespace OTUNIFSPHERE { %extend UniformSphereRandomVectorImplementation { UniformSphereRandomVectorImplementation(const UniformSphereRandomVectorImplementation & other) { return new OTUNIFSPHERE::UniformSphereRandomVectorImplementation(other); } } }
