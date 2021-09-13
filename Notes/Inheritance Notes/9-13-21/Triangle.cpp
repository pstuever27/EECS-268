/*Boardwork 1
1) define a triangle class that implements the Shape interface. 
  You will make the Triangle.h and .cpp files. 
  Triangle have a base a height, the required area method, and a constructor that takes a base and height.
*/

#include <iostream>
#include <math.h>
#include "Triangle.h"

double Triangle::Area() const{
  double area = 0
  area = 1/2(m_base*m_height);
  return(area);
}

Triangle::Triangle(double base, double height)
{
  m_base = base;
  m_height = height;
}