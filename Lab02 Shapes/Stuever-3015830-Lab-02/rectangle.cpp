/** -----------------------------------------------------------------------------
 *
 * @file: rectangle.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Calculates the area and returns the shapeName
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
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
std::string rectangle::shapeName() const
{
  return "Rectangle ";
}
