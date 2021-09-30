/** -----------------------------------------------------------------------------
 *
 * @file: StackOfChar.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: This class will handle the push, pop, peek, and isEmpty methods that will be used to make and handle the stack.
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <string>
#include "StackOfChar.h"


StackOfChar::StackOfChar()
{
  m_top = nullptr;
  newTop = nullptr;
}


StackOfChar::StackOfChar(const StackOfChar& orig)
{
  m_top->getEntry();
}


StackOfChar::~StackOfChar()
{
  if(m_top != nullptr)
  {
    m_top = nullptr;
    delete[] m_top;
  }
  if(newTop != nullptr)
  {
    newTop = nullptr;
    delete[] newTop;
  }
}


void StackOfChar::operator=(const StackOfChar& rhs)
{}

void StackOfChar::push(char entry)
{
  newTop = new Node(entry);
  newTop->setNext(m_top);
  m_top = newTop;
  newTop = nullptr;
  delete newTop;
}


void StackOfChar::pop()
{
  if(m_top == nullptr)
  {
  throw(std::runtime_error("Stack Empty")); //Stack Empty if true
  }else
  {
    newTop = m_top;
    m_top = newTop->getNext();
    delete newTop;
  }
  
 
}

char StackOfChar::peek() const
{
  if(m_top == nullptr)
  {
    throw(std::runtime_error("Stack Empty"));  //Stack empty if true
  }else
  {
  return (m_top->getEntry());
  }
}

bool StackOfChar::isEmpty() const
{
  return(m_top == nullptr);
}
