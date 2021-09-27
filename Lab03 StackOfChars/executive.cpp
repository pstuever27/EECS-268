//Done
#include "executive.h"
#include <iostream>
#include <string>

executive::executive(std::string argv)
{
  
}

executive::~executive()
{
  delete[] m_action;
}

void executive::run();
{
  //The plan: this will look at the action from argv and will run either test or parser. They will handle it from here.
  if(m_action == "-t")
  {
    StackTester tester();
    tester.runTests();
  }
  if(m_action == "-p")
  {
    Parser ParseRun();
    ParseRun.runParse();
  }
}
