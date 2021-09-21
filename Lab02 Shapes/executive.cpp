#include "executive.h"
#include <iostream>
#include <fstream>

executive::executive(std::string argv)
{
    m_fileName = argv;
    
    container = nullptr;
    circle_obj = nullptr;
    rectangle_obj = nullptr;
    triangle_obj = nullptr;
}
void executive::run()
{
  std::string function;
  int index = 0;
  std::string type;
  double radius = 0;
  double base = 0;
  double height = 0;
  std::ifstream inFile;
  inFile.open(m_fileName);

  if(inFile.is_open())
  {
      inFile >> amount;
      if (amount > 0)
      {
          do {
              inFile >> function >> index;


              if (function == "ADD")
              {
                  inFile >> type;
                  if (type == "REC")
                  {
                      inFile >> base >> height;
                 
                  }
                  if (type == "TRI")
                  {
                      inFile >> base >> height;
                  }
                  if (type == "CIR")
                  {
                      inFile >> radius;
                  }
              }
              else if (function == "REMOVE")
              {

              }
              else if (function == "PRINT")
              {
                  std::cout << "Shape at index "; //l;ksajfdjsadkjsadfkj
              }

          } while (function != "EXIT");
      }
  }
}
executive::~executive()
{
    delete[] container;
    //not sure this is correct
}
