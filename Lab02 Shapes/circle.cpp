#include <iostream>
#include <cmath>
#include "circle.h"

circle::circle(double radius)
{
    m_radius = radius;
}
double circle::area() const;
{
    double area;
    area = M_PI * (m_radius * m_radius);
    return(area);
}
circle::~circle
{
    delete[] circle;
}