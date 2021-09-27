/** -----------------------------------------------------------------------------
 *
 * @file: rectangle.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Header file for rectangle.cpp. Creates the methods area and shapeName.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
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
    /**
     * For rectangle constructor
     * @pre: This requires a base and a height to be passed in from the calling function.
     * @post: It will set the member variables m_base and m_height to their respective values for later use.
     * @return: None, constructor.
     **/ 
    rectangle(double base, double height);

    /**
     * For virtual double area() const
     * @pre: This requires that all the criteria for the index and pointer are met in the other files in order to be called. It also needs a shape to exist. Finally, it needs the member variable(s) to be set in the constructor
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
