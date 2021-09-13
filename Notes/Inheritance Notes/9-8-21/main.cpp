#include <iostream>
#include "Animal.h"
#include "Dog.h"

void playwithanimal(animal& a)
{
    a.eat();
    a.sleep(); //These are good because animal knows how to eat and sleep
    //a.doTrick(); --- This wouldn't work because only dogs can do tricks, animal class objects can't

}

int main()
{
  Animal myAnimal;
  Dog myDog;
  playwithanimal(myAnimal);
  playwithanimal(myDog);
  return(0);
}

//A pointer/reference of the Base type that is pointing/refering the derived type, can only access Base type members
  //Example:

Animal* aPtr = new Dog(); //This is fine
aPtr->eat();
aPtr->sleep();
aPtr->doTrick(); //Error
Dog* dPtr = new Animal();//Error, can't have something smaller than Generic point to generic

//Polymorphism
