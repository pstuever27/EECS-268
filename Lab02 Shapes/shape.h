/** -----------------------------------------------------------------------------
 *
 * @file: shape.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Interface for the various shapes to use for the function.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
class Shape
{
   public:
   /**
    * For double area()
    * @pre: This pure virutal method will require the individual shapes to provide their own method definitions. It also requires that there is a shape in the area for it to be called
    * @post: Afterward, this will let whatever called it (ShapeContainer) know what the area of the shape in the index is.
    * @return: It will return a double area
    **/
   virtual double area() const = 0;

   /**
    * For std::string shapeName()
    * @pre: This pure virtual method will require the individual shapes to provide their own method definitons. It also requires that there is a shape in the area for it to be called
    * @post: Afterward, we will get the shapeName of the shape in the index desired.
    * @return: This will return the shapeName as a string.
    **/
   virtual std::string shapeName() const = 0;
   /**
    * For ~shape()
    * I had trouble figuring this one out. Since there are no pointers in the shape section, we don't need to delete anything.
    * The instructions did say that we can't add anything, but nothing was said about deletion.
    **/
   //virtual ~Shape();
};

#endif
