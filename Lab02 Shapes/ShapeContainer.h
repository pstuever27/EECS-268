/** -----------------------------------------------------------------------------
 *
 * @file: ShapeContainer.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Header file given in lab instructions.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "shape.h"
#include <stdexcept>

class ShapeContainer
{
   public:
   /**
    * For ShapeContainer constructor:
    * @pre: This requires that shape.h is interfaced correctly with the individual shapes, and that it is called by executive. It also requires that size > 0
    * @post: Afterwards, m_size will be set and m_arrayOfShapes will be set to a new Shape pointer with size m_size.
    * @return: None
    **/
   ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr

   /**
    * For ~ShapeContainer();
    * @pre: This requires that executive.cpp is done with the container pointer and the program is quit.
    * @post: Afterward, this will just have deleted m_arrayOfShapes and deallocated the memory.
    * @return: None
    **/
   ~ShapeContainer();

   /**
    * For double area:
    * @pre: This requires that the shape interface and the shapes themselves are correctly setup, there is a shape in the index, and that the index is in the correct range.
    * @post: Afterward, it will give us the area from the respective shape.
    * @return: The return will be the double area from the shape interface's shapes.
    *
    **/
   double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr

   /**
    * For std::string shapeName
    * @pre: This requires that the shape interface and the shapes themselves are correctly setup, there is a shape in the index, and that the index is in the correct range.
    * @post: Afterward, we will get the name of the shape we are referencing.
    * @return: This will return the string of the shape we are looking at.
    **/
   std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   /**
    * For void add
    * @pre: This requires that the index is in the right range, and that the index is not negative.
    * @post: Afterward, we will get a shape put into that index that we can later look at to get information.
    * @return: None, void
    **/
   void add(Shape* shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr

   /**
    * For void remove
    * @pre: This requires that there is a shape in the index as well as the index is in the correct range.
    * @post: Afterward, the shape will be deleted and won't be able to be accessed.
    * @return: None, void
    **/
   void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete

   private:
   Shape** m_arrayOfShapes;
   int m_size;
};
#endif
