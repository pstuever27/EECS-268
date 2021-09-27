/** -----------------------------------------------------------------------------
 *
 * @file: executive.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Creates the methods and pointers for the various operations for the fucntion, as well as a destructor.
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <fstream>
#include <iostream>
#include "ShapeContainer.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"


class executive
{

public:
    /**
    * For executive constructor:
    * @pre: This method will need the fileName from main.cpp that is passed in, and the different pointers we made below to initalize them.
    * @post: Afterward, it will setup the rest of the function for using the pointers and filename throughout the program.
    * @return: It will not return anything.
    **/
    executive(std::string fileName);

    /**
     * For void run();
     * @pre: This function needs a lot since it runs the show. It needs the m_fileName and pointers that were set in the constructor, but it also requires that the index is correct.
     *       Also, it needs ShapeContainer to be working properly, as well as the indiviual shapes properly interfaced with shape.h.
     * @post: After this function is done, which requires the EXIT function, the program is finished and will exit
     * @return: It doesn't return any values, it's void.
     *
     **/
    void run();

    /**
     * For ~executive();
     * @pre: This requires that all functions of executive are done, which is just that the program is finished running.
     * @post: The program is done
     * @return: None
     **/
    ~executive();

    std::ifstream inFile;

    ShapeContainer* container;
    circle* circle_obj;
    rectangle* rectangle_obj;
    triangle* triangle_obj;

private:
    int amount;
    std::string m_fileName;
};

#endif
