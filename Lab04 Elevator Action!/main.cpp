#include <iostream>
#include "Executive.h"

int main(int argc, char* argv[])
{
  if(argc > 0)
  {
  Executive begin(argv[1]);
  begin.run();
  }
  else{
    std::cout << "Please enter a filename!\n";
  }
  return(0);
}
