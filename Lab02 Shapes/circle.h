/** -----------------------------------------------------------------------------
 *
 * @file: circle.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Header file for circle.cpp. Makes the area and shapeName methods.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <math.h>
#include "shape.h"

class circle : public Shape
{
private:
   double m_radius;
public:
    /**
     * For circle constructor:
     * @pre: This needs a radius to be passed in so that the member variable can be set to it.
     * @post: After, the member variable m_radius is set to the radius
     * @return: None
     **/
    circle(double radius);

    /**
     * For virtual double area() const
     * @pre: This requires that all the criteria for the index and pointer are met in the other files in order to be called. It also needs a shape to exist. Finally, it needs the member variable to be set in the constructor
     * @post: Afterward, it will have calculated the area of the shape.
     * @return: It will return the area of the shape as a double.
     **/
    virtual double area() const;
    /**
     * For virtual std::string shapeName() const
     * @pre: This requires that all the criteria for the index and pointer are met in the other files in order to be called. It also needs a shape to exist.
     * @post: Nothing much, just lets us know what shape it is.
     * @return: Returns the string of the shape name.
     **/
    virtual std::string shapeName() const;

};
#endif
