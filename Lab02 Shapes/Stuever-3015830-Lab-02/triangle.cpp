/** -----------------------------------------------------------------------------
 *
 * @file: triangle.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Defines the methods for area and shapeName.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#include "triangle.h"
#include <iostream>
#include <math.h>

//may need some tweaking
triangle::triangle(double base, double height)
{
    m_base = base;
    m_height = height;
}

double triangle::area() const
{
    double area;
    area = 1/2*(m_base*m_height);
    return(area);
}
std::string triangle::shapeName() const
{
  return "Triangle ";
}
