#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape
{
   public:
   virtual double area() const = 0;
   virtual std::string shapeName() const = 0;
   virtual ~Shape() 
};

#endif