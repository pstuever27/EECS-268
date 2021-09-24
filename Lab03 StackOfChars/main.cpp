//done
#include <string>
#include <iostream>
#include "executive.h"


int main(int argc, char* argv)
{
  if(argc > 0)
  {
  executive begin(argv);
  begin.run();

  }
  else{
    std::cout << "Please enter a filename!\n";
  }
  return(0);
}
