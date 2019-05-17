//                                               -*- C++ -*-
/**
 *  @brief UniformSphereRandomVectorImplementation
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
#ifndef OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTORIMPLEMENTATION_HXX
#define OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTORIMPLEMENTATION_HXX

#include <openturns/RandomVectorImplementation.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "otunifsphere/otunifsphereprivate.hxx"

namespace OTUNIFSPHERE
{

/**
 * @class UniformSphereRandomVector
 *
 * UniformSphereRandomVectorImplementation is some uniformsphererandomvector type to illustrate how to add some classes in OpenTURNS
 */
class OTUNIFSPHERE_API UniformSphereRandomVector
  : public OT::RandomVectorImplementation
{
  CLASSNAME;

public:
  /** Default constructor */
  UniformSphereRandomVector();

  /* Useful constructor */
  UniformSphereRandomVector(const OT::Point & center, const OT::Scalar radius);

  /** Virtual constructor method */
  UniformSphereRandomVector * clone() const;

  /** Get dimension */
  OT::UnsignedInteger getDimension() const;

  /** Realization sampler */
  OT::Point getRealization() const;

  /** Get the center of the sphere*/
  OT::Point getCenter() const;

  /** Set the center of the sphere */
  void setCenter(const OT::Point & center);

  /** Get the radius of the sphere*/
  OT::Scalar getRadius() const;

  /** Set the radius of the sphere */
  void setRadius(const OT::Scalar radius);

  /** String converter */
  OT::String __repr__() const;

  /** Method save() stores the object through the StorageManager */
  virtual void save(OT::Advocate & adv) const;

  /** Method load() reloads the object from the StorageManager */
  virtual void load(OT::Advocate & adv);

private:

  OT::Point center_;
  OT::Scalar radius_;

}; /* class UniformSphereRandomVector */

} /* namespace OTUNIFSPHERE */

#endif /* OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTORIMPLEMENTATION_HXX */
