#ifndef CIRCLE.H
#define CIRCLE.H

#include <iostream>
#include <math.h>
#include "Shape.h"

class circle: public Shape
{
private:
   double m_radius;
public:
    circle(double radius);
    virtual double area() const;
    virtual std::string shapeName() const;
    ~circle();
};
#endif
