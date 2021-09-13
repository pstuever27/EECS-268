  //This is more specialized
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
    public:
    void doTrick();
    virtual void sleep();
    virtual void eat();
};

#endif