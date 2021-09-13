#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
  Animal();
  virtual void eat(); //virtual keyword will tell animal.h to look at dog.h to allow it to use these methods
  virtual void sleep();
}