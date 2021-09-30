/** -----------------------------------------------------------------------------
 *
 * @file: executive.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Takes in the action and decides whether parser or tester will start
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "executive.h"
#include "Node.h"
#include "StackTester.h"
#include "Parser.h"

#include <iostream>
#include <string>

executive::executive(std::string argv)
{
  m_action = argv;
}

executive::~executive()
{
}

void executive::run()
{
  //The plan: this will look at the action from argv and will run either test or parser. They will handle it from here.
  if(m_action == "-t")
  {
    StackTester tester;
    tester.runTests();
  }
  if(m_action == "-p")
  {
    Parser ParseRun;
    ParseRun.runParse();
  }
}
