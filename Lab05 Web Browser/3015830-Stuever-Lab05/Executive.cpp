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
{
  if(History != nullptr)
  {
    History = nullptr;
  }
  delete History;
}

void Executive::run()
{
  History = new BrowserHistory();
  std::fstream inFile;
  std::string function;
  std::string website;
  inFile.open(m_fileName);
  if(inFile.is_open())
  {
    //while(inFile >> function)
    //{
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
        
        delete copy;
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
    //}
  }
  else{
    std::cout << "Invalid Filename!\n";
  }
}
