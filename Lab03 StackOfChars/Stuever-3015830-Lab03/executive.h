/** -----------------------------------------------------------------------------
 *
 * @file: executive.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: header file for executive.cpp
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <iostream>
#include "Node.h"
#include <iostream>
#include <string>

class executive{

public:
  /**
   * @pre This will need the string passed in from main.cpp that will be the selection
   * @post It will set m_action to that string
   * @return no return
   */ 
  executive(std::string argv);

  /**
   * @pre none
   * @post Nothing to destruct
   * @return none
   */ 
  ~executive();

  /**
   * @pre This requires that m_action is set by the constructor
   * @post This will then use that action to decide if the user wants to use the parser or the tester and will execute accordingly
   * @return void
   */ 
  void run();

private:
  std::string m_action;
};
#endif
