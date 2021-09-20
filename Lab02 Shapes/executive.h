#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "ShapeContainer.h"

#include <fstream>
#include <iostream>

class executive
{

public:
    executive(std::string fileName);
    void run();
    ~executive();

private:
    int amount;
    std::string m_fileName;
    ShapeContainer* container;
};

#endif
