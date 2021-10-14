#include "Executive.h"
#include <iostream>
#include <fstream>

Executive::Executive(std::string argv)
{
  m_fileName = argv;
  History = new BrowserHistory();
}

Executive::~Executive()
{}

void Executive::run()
{
  fstream inFile;
  std::string function;
  std::string website;
  inFile.open(m_fileName);
  if(inFile.is_open())
  {
    inFile >> function;

    if(function == "NAVIGATE")
    {
      inFile >> website;
      History->navigateTo(website);
    }

    else if(function == "HISTORY")
    {

    }
    else if(function == "FORWARD")
    {
      try
      {
        History->forward();
      }
      catch(std::exception& e)
      {}
    }
    else if(function == "BACK")
    {
      try
      {
        History->back();
      }
      catch(const std::exception& e)
      {}
    }
  }
}
