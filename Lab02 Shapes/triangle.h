#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "shape.h"

class triangle : public Shape
{
public: 
    triangle(double base, double height);
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~triangle();

private:
    double m_base;
    double m_height;
};
#endif
