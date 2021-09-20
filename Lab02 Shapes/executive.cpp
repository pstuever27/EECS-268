#include "executive.h"
#include <iostream>
#include <fstream>

executive::executive(std::string argv)
{
    m_fileName = argv;
    run();
}
void executive::run()
{
  int arrsize;
  std::string function;
  int index;
  std::string type;
  double radius;
  int base;
  int height;
  std::ifstream inFile;
  inFile.open(m_fileName);

  if(inFile.is_open())
  {
      inFile >> arrsize;
      ShapeContainer container = new ShapeContainer;

      do{
      inFile >> function >> index >> type;


      if(function == "ADD")
      {
        if(type == "REC")
        {
          inFile >> base >> height;
          container->add();
        }
        if(type == "TRI")
        {
          inFile >> base >> height;
        }
        if(type == "CIR")
        {
          inFile >> radius;
        }
      }
      else if(function == "REMOVE")
      {

      }
      else if(function == "PRINT")
      {
        std::cout << "Shape at index "; //l;ksajfdjsadkjsadfkj
      }

    }while(function != "EXIT");
  }
}
executive::~executive()
{
    delete[] container;
    //not sure this is correct
}
