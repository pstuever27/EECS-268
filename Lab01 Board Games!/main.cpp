/*Name: Paul Stuever
Date: 9/7/2021
Student ID: 3015830
Filename: main.cpp
Description: This program will take in a filename from argv that will then be stored and viewed by the user in 5 different ways as desired by the user.
  This program will loop until the user chooses to exit.
*/

#include <iostream>
#include <fstream>
#include "gamerecords.h"
#include "menu.h"
int main(int argc, char* argv[])
{
  //takes the filename from the argv
  std::string fileName;
  if(argc > 1)
  {
    fileName = argv[1];
  //makes menu object and begins the program by calling .run
    Menu gamefile;
    gamefile.run(fileName);
  }
  else
  {
    //check for invalid file in argv
    std::cout << "Invalid Filename!\n";
  }
  return(0);
}
