/** -----------------------------------------------------------------------------
 *
 * @file: main.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: This file will take the argv and argc from the execution and pass it into my executive class for running the program
 * @date:  09/21/20201
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <fstream>
#include "executive.h"

int main(int argc, char* argv[])
{
  //takes the filename from the argv
  std::string fileName;
  if(argc > 1)
  {

    executive exec(argv[1]);
  //makes menu object and begins the program by calling .run
    exec.run();
  }
  else
  {
    //check for invalid file in argv
    std::cout << "Invalid Filename!\n";
  }
  return(0);
}
