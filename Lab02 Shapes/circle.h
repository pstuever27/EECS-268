#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <math.h>
#include "shape.h"

class circle: public Shape
{
private:
   double m_radius;
public:
    circle(double radius);
    virtual double area() const;
    virtual std::string shapeName() const;
    virtual ~circle();
};
#endif
