#!/usr/bin/env python

from __future__ import print_function
import openturns as ot
import otunifsphere

a = otunifsphere.UniformSphereRandomVector()
print(a)

center = Point(3, [1.5, 2.5, 3.5])
radius = 0.5

# Test default constructor and attribute_getting accessors
default_random_vector = UniformSphereRandomVector()
print(default_random_vector)
print("Default Center: ")
print(default_random_vector.getCenter())
print("Default Radius: {!r}".format(default_random_vector.getRadius()))

# Test attribute-setting methods  
random_vector = default_random_vector
random_vector.setCenter(center);
random_vector.setRadius(radius);
print(random_vector)
print("Center: ")
print(default_random_vector.getCenter())
print("Radius: {!r}".format(random_vector.getRadius()))
print("Dimension: {!r}".format(random_vector.getDimension()))

# Test getSample method
sample = Sample(random_vector.getSample(10));

# Test whether gap between sample elements and center fits radius
element = sample[5]
ecart = element - center;
if(abs(ecart.norm() - radius) > 10^(-10)):
    raise ValueError("Element-to-center distance is {!r} when the radius should be {!r}".format(ecart.norm(), radius)) 

