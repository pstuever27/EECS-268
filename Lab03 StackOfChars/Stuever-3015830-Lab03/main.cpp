/** -----------------------------------------------------------------------------
 *
 * @file: main.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: main file that will take in the function and let executive handle the rest.
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include <string>
#include <iostream>
#include "executive.h"


int main(int argc, char* argv[])
{
  if(argc > 0)
  {
  executive begin(argv[1]);
  begin.run();
  }
  else{
    std::cout << "Please enter a function!\n";
  }
  return(0);
}
