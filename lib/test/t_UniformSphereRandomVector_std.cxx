#include <iostream>

#include <openturns/OTtestcode.hxx>
#include "otunifsphere/otunifsphere.hxx"

using namespace OT;
using namespace OTUNIFSPHERE;
using namespace OT::Test;

int main(int argc, char **argv)
{
  Point center(3);
  center[0] = 1.5;
  center[1] = 2.5;
  center[2] = 3.5;
  Scalar radius(0.5);

  // Test default constructor and attribute_getting accessors
  UniformSphereRandomVector default_random_vector;
  std::cout << default_random_vector << std::endl;
  std::cout << "Default Center: " << default_random_vector.getCenter() << std::endl;
  std::cout << "Default Radius: " << default_random_vector.getRadius() << std::endl;

  // Test attribute-setting methods  
  UniformSphereRandomVector random_vector(default_random_vector);
  random_vector.setCenter(center);
  random_vector.setRadius(radius);
  std::cout << random_vector << std::endl;
  std::cout << "Center: " << random_vector.getCenter() << std::endl;
  std::cout << "Radius: " << random_vector.getRadius() << std::endl;
  std::cout << "Dimension: " << random_vector.getDimension() << std::endl;

  // Test getSample method
  Sample sample(random_vector.getSample(10));

  // Test whether gap between sample elements and center fits radius
  Point element(sample[5]);
  Point ecart = element - center;
  assert_almost_equal(ecart.norm(), radius); 
  return 0;
}

