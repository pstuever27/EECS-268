/**
 * @name Paul Stuever
 * @Filename main.cpp
 * @assignment EECS268 - Lab07 - Blob in the city!
 * @Description This is the main file that will take in the filename and, if the file is valid, pass it off to City.cpp, my executive.
 * @date 11/03/2021
 **/

#include "City.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  if(argc>0)
  {
    std::ifstream inFile;
    inFile.open(argv[1]);
    if(inFile.is_open())
    {
      try{
      City run(inFile);
      run.printBefore();
      run.BlobbifyCity();
      run.printAfter();
      }
      catch(std::exception& e)
      {
        std::cout << e.what();
      }
      
    }
    else
    {
      std::cout << "Please enter a valid filename!\n";
    }
  }
  else
  {
    std::cout << "Please enter a filename!\n";
  }
  return(0);
}
