#include <iostream>
#include <cmath>
#include "rectangle.h"

rectangle::rectangle(double base, double height)
{
    m_base = base;
    m_height = height;
}
double rectangle::area() const
{
    double area;
    area = (m_base * m_height);
    return(area);
}
std::string rectangle::shapeName()
{
  return "Rectangle ";
}
rectangle::~rectangle()
{
    delete[] rectangle;
}
