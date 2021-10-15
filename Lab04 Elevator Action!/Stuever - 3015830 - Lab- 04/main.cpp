/** -----------------------------------------------------------------------------
 *
 * @file: main.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: main file that will take in the function and let executive handle the rest.
 * @date:  10/6/2021
 *
 ---------------------------------------------------------------------------- **/

#include <iostream>
#include <string>
#include "Executive.h"

int main(int argc, char* argv[])
{
  if(argc > 1)
  {
  Executive begin(argv[1]);
  begin.run();
  }
  else if(argc < 0)
  {
    std::cout << "Please enter a filename!\n";
  }
  return(0);
}
