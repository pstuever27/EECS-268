#include "Executive.h"
#include <iostream>

int main(int argc, char** argv)
{
  if(argc>0)
  {
    Executive exec(argv);
    exec.run();
  }
  else
  {
    std::cout << "Please enter a filename!\n";
  }
}
