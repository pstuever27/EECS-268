#include "executive.h"
#include "ShapeContainer.h"
#include <iostream>
#include <fstream>

executive::executive(std::string argv)
{
    m_fileName = argv;
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
      container = new ShapeContainer[arrsize];

    for(int i = 0; i<arrsize; i++)
    {
      inFile >> function >> index >> type;


      if(function == "ADD")
      {
        if(type == "REC")
        {
          inFile >> base >> height;
          container->add()
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
        std::cout << "Shape at index " //l;ksajfdjsadkjsadfkj
      }

    }
  }
}
executive::~executive()
{
    delete(container);
    //not sure this is correct
}
