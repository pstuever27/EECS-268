#include <iostream>
#include <fstream>
#include "executive.h"

int main(int argc, char* argv[])
{
  //takes the filename from the argv
  std::string fileName;
  if(argc > 1)
  {

    executive exec(argv[1]);
  //makes menu object and begins the program by calling .run
    exec.run(            /*hehe*/         );
  }
  else
  {
    //check for invalid file in argv
    std::cout << "Invalid Filename!\n";
  }
  return(0);
}
/*        .--'''''''''--.
     .'      .---.      '.
    /    .-----------.    \
   /        .-----.        \
   |       .-.   .-.       |
   |      /   \ /   \      |
    \    | .-. | .-. |    /
     '-._| | | | | | |_.-'
         | '-' | '-' |
          \___/ \___/
       _.-'  /   \  `-._
     .' _.--|     |--._ '.
     ' _...-|     |-..._ '
            |     |
            '.___.'
*/