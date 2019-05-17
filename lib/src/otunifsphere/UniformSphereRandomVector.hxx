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
#ifndef OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTOR_HXX
#define OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTOR_HXX

#include <openturns/TypedInterfaceObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "otunifsphere/otunifsphereprivate.hxx"

namespace OTUNIFSPHERE
{

/* forward declaration */
class UniformSphereRandomVectorImplementation;

/**
 * @class UniformSphereRandomVector
 *
 * UniformSphereRandomVector is some uniformsphererandomvector type to illustrate how to add some classes in Open TURNS
 */
class OTUNIFSPHERE_API UniformSphereRandomVector
  : public OT::TypedInterfaceObject<UniformSphereRandomVectorImplementation>
{
  CLASSNAME;

public:

  /** Default constructor */
  UniformSphereRandomVector();

  /** Constructor from implementation */
  UniformSphereRandomVector(const UniformSphereRandomVectorImplementation & implementation);

  /** a func that return a point squared. **/
  OT::Point square(OT::Point & p) const;

  /** String converter */
  OT::String __repr__() const;

private:

}; /* class UniformSphereRandomVector */

} /* namespace OTUNIFSPHERE */

#endif /* OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTOR_HXX */
