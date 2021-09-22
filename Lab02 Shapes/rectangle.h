#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <cmath>
#include "shape.h"

class rectangle : public Shape
{
private:
    double m_base;
    double m_height;
public:
    rectangle(double base, double height);
    virtual double area() const;
    virtual std::string shapeName() const;
    //virtual ~rectangle();
};
#endif
