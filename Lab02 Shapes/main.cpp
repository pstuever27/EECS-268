#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
  //takes the filename from the argv
  std::string fileName;
  if(argc > 1)
  {
    fileName = argv[1];
  //makes menu object and begins the program by calling .run
    Shape run;
    run.run(fileName);
  }
  else
  {
    //check for invalid file in argv
    std::cout << "Invalid Filename!\n";
  }
  return(0);
}

}
