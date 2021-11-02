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
      City run(inFile);
      run.printBefore();
      run.BlobbifyCity();
      run.printAfter();
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
