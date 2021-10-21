#include "Executive.h"
#include "BrowserHistory.h"
#include "LinkedList.h"
#include <iostream>
#include <fstream>

#include <string>

Executive::Executive(std::string argv)
{
  m_fileName = argv;
  History = nullptr;
}

Executive::~Executive()
{}

void Executive::run()
{
  History = new BrowserHistory();
  std::fstream inFile;
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
      std::string currentSite;
      ListInterface<std::string>* copy = new LinkedList<std::string>();
      currentSite = History->current();
      std::cout << "==Oldest==";
      //for loop here?
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
