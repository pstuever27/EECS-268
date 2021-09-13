#include "Dog.h"
#include <iostream>

void Dog::doTrick()
{
  std::cout << "Trick Happening...\n";
}

//Basically, you can have custom definitions from the animal class that will do something differents
void Dog::sleep()
{
  std::cout << "Hrp. Hrp. Hrrp. ruf.\n";
}

void Dog::eat()
{
  doTrick();
  std::cout << "DOG EATING\n";
}
