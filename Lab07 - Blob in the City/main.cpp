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
