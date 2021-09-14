#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "Shape.h"
#include "ShapeContainer.h"

class triangle: public Shape
{
    virtual double area() const;
    ~Triangle();
}