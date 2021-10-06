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
