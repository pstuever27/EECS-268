#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "Shape.h"
#include "ShapeContainer.h"

class triangle: public Shape
{
    triangle(double base, double height);
    virtual double area() const;
    ~triangle();

private:
    double m_base;
    double m_height;
};
#endif