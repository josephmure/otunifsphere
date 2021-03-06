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
#include <openturns/PersistentObjectFactory.hxx>
#include "otunifsphere/UniformSphereRandomVector.hxx"
#include "openturns/DistFunc.hxx"
#include "openturns/Description.hxx"

using namespace OT;

namespace OTUNIFSPHERE
{

CLASSNAMEINIT(UniformSphereRandomVector);

static Factory<UniformSphereRandomVector> Factory_UniformSphereRandomVector;


/* Default constructor */
UniformSphereRandomVector::UniformSphereRandomVector()
  : RandomVectorImplementation()
   , center_()
   , radius_()
{
  setRadius(1.0);
  setCenter(Point(1, 0.0));
}

/* Useful constructor */
UniformSphereRandomVector::UniformSphereRandomVector(const Point & center, const Scalar radius)
  : RandomVectorImplementation()
    , center_()
    , radius_()
{
  if(!(radius >= 0)) throw InvalidArgumentException(HERE) << "Error: the radius must be nonnegative and is instead " << radius ;
  setRadius(radius);
  setCenter(center);
}

/* Virtual constructor method */
UniformSphereRandomVector * UniformSphereRandomVector::clone() const
{
  return new UniformSphereRandomVector(*this);
}

/* Get dimension */
UnsignedInteger UniformSphereRandomVector::getDimension() const
{
  return center_.getDimension();
}

/* Realization sampler */
Point UniformSphereRandomVector::getRealization() const
{
  Point realization(DistFunc::rNormal(center_.getDimension()));
  realization *= radius_ / realization.norm();
  realization += center_;
  return realization;
}

/* Get the center of the sphere*/
Point UniformSphereRandomVector::getCenter() const
{
  return center_;
}

/* Set the center of the sphere */
void UniformSphereRandomVector::setCenter(const Point & center)
{  
  center_ = center;
  setDescription(Description::BuildDefault(getDimension()));

}

/* Get the radius of the sphere*/
Scalar UniformSphereRandomVector::getRadius() const
{
  return radius_;
}

/* Set the radius of the sphere */
void UniformSphereRandomVector::setRadius(const Scalar radius)
{
  radius_ = radius;
}

/* String converter */
String UniformSphereRandomVector::__repr__() const
{
  OSS oss;
  oss << "class=" << UniformSphereRandomVector::GetClassName() << "center= " << center_ << " radius= " << radius_;
  return oss;
}

/* Method save() stores the object through the StorageManager */
void UniformSphereRandomVector::save(Advocate & adv) const
{
  RandomVectorImplementation::save( adv );
  adv.saveAttribute("center_", center_);
  adv.saveAttribute("radius_", radius_);
}


/* Method load() reloads the object from the StorageManager */
void UniformSphereRandomVector::load(Advocate & adv)
{
  RandomVectorImplementation::load( adv );
  adv.loadAttribute("center_", center_);
  adv.loadAttribute("radius_", radius_);
}


} /* namespace OTUNIFSPHERE */
