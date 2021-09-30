#include "Executive.h"
#include <iostream>
#include <fstream>

Executive::Executive(std::string argv)
{
  Elevator = nullptr;
  Line = nullptr;
  argv = m_fileName;
}
Executive::~Executive()
{
  delete Elevator;
  delete Line;
}
void Executive::run()
{
  std::ifstream inFile;
  inFile.open(m_fileName);
  std::string action;
  std::string name;

  if(inFile.is_open())
  {
    while(inFile >> action)
    {
      inFile >> name;
    }
  }
  else
  {
    std::cout << "Invalid filename!\n";
  }
}
