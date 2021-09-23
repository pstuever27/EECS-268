/** -----------------------------------------------------------------------------
 *
 * @file:
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief:
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
class Shape
{
   public:
   virtual double area() const = 0;
   virtual std::string shapeName() const = 0;
   //virtual ~Shape();
};

#endif
