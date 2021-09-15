#include "triangle.h"
#include "Shape.h"
#include "ShapeContainer.h"
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
    area = 1/2(m_base*m_height);
    return(area);
}
triangle::~triangle()
{
    delete[] triangle;
}