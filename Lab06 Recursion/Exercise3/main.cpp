#include <iostream>
#include <string>
#include "Fib.h"

int main(int argc, char* argv[])
{
  if(argc < 3)
  {
    std::cout << "Incorrect number of parameters\n";
  }
  else
  {
    std::string function = argv[1];
    int input = std::stoi(argv[2]);
    Fib Fibs;
    if(function == "-i")
    {
      try{
      int i = 0;
      int result = Fibs.ith(input, i);
      std::cout << result << '\n';
      }
      catch(std::exception& e)
      {
        std::cout << "Invalid Index!\n";
      }
    }
    else if(function == "-v")
    {
      int index = 0;
      Fib contain;
      std::string result = contain.doesContain(input, index) ? " is in " : " is not in ";
      std::cout << input << result << "the sequence\n";
    }
    else
    {
      std::cout << "Invalid Function!\n";
    }
  }
}
