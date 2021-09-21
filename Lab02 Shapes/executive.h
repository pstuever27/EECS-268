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
    executive(std::string fileName);
    void run();
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
