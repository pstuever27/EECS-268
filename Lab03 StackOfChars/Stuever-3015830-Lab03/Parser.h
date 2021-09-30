/** -----------------------------------------------------------------------------
 *
 * @file: Parser.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Header file for Parser.cpp
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef PARSER_H
#define PARSER_H
#include "Node.h"
#include "StackOfChar.h"

class Parser
{
public:
/** 
 * @pre Needs stacktester to pass all tests
 * @post Will set Stack to nullptr and m_length to 0
 * @param none
 * @throw none
 **/
  Parser();

  /** 
  * @pre This needs the stack to work and the user to select it at start
  * @post Will tell us if our input is balanced
  * @param none
  * @throw Will catch errors if recieved from the StackOfChar methods
  **/
  void runParse();

  /** 
  * @pre Stack needs to be set to nullptr
  * @post Deletes Stack
  * @param none
  * @throw none
  **/
  ~Parser();

private:

int m_length;
StackOfChar* Stack;

};
#endif