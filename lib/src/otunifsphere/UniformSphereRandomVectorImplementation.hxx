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

#include <openturns/PersistentObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "otunifsphere/otunifsphereprivate.hxx"

namespace OTUNIFSPHERE
{

/**
 * @class UniformSphereRandomVectorImplementation
 *
 * UniformSphereRandomVectorImplementation is some uniformsphererandomvector type to illustrate how to add some classes in OpenTURNS
 */
class OTUNIFSPHERE_API UniformSphereRandomVectorImplementation
  : public OT::PersistentObject
{
  CLASSNAME;

public:
  /** Default constructor */
  UniformSphereRandomVectorImplementation();

  /* Useful constructor */
  UniformSphereRandomVector(const Point & center, const Scalar radius);

  /** Virtual constructor method */
  UniformSphereRandomVectorImplementation * clone() const;

  /** Realization sampler */
  Point getRealization() const;

  /** String converter */
  OT::String __repr__() const;

  /** Method save() stores the object through the StorageManager */
  virtual void save(OT::Advocate & adv) const;

  /** Method load() reloads the object from the StorageManager */
  virtual void load(OT::Advocate & adv);

private:

}; /* class UniformSphereRandomVectorImplementation */

} /* namespace OTUNIFSPHERE */

#endif /* OTUNIFSPHERE_UNIFORMSPHERERANDOMVECTORIMPLEMENTATION_HXX */
