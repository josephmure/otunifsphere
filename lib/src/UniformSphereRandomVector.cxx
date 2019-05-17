//                                               -*- C++ -*-
/**
 *  @brief UniformSphereRandomVector
 *
 *  Copyright 2005-2019 Airbus-EDF-IMACS-ONERA-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#include "otunifsphere/UniformSphereRandomVector.hxx"
#include "otunifsphere/UniformSphereRandomVectorImplementation.hxx"
#include <openturns/PersistentObjectFactory.hxx>

using namespace OT;

namespace OTUNIFSPHERE
{

CLASSNAMEINIT(UniformSphereRandomVector);

/* Default constructor */
UniformSphereRandomVector::UniformSphereRandomVector()
  : TypedInterfaceObject<UniformSphereRandomVectorImplementation>(new UniformSphereRandomVectorImplementation)
{
  // Nothing to do
}


UniformSphereRandomVector::UniformSphereRandomVector(const UniformSphereRandomVectorImplementation & implementation)
  : TypedInterfaceObject<UniformSphereRandomVectorImplementation>(implementation.clone())
{
  // Nothing to do
}

Point UniformSphereRandomVector::square(Point & p) const
{
  return getImplementation()->square(p);
}

/* String converter */
String UniformSphereRandomVector::__repr__() const
{
  OSS oss;
  oss << "class=" << UniformSphereRandomVector::GetClassName()
      << " implementation=" << getImplementation()->__repr__();
  return oss;
}


} /* namespace OTUNIFSPHERE */
