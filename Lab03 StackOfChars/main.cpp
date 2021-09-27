//done
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
