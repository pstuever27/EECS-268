#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <cmath>
#include "Shape.h"

class rectangle: public Shape
{
private:
    double m_base;
    double m_height;
public:
    rectangle(double base, double height);
    virtual double area() const;
    ~rectangle();
};
#endif
