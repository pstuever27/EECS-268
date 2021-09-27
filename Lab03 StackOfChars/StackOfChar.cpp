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
  m_top = orig.peek();
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
{

}


void StackOfChar::push(char entry)
{
  newTop = new Node(entry);
  newTop->setNext(m_top);
  m_top = newTop;
}


void StackOfChar::pop()
{
  newTop = new Node();
  newTop->getNext();
  m_top = newTop;
}


char StackOfChar::peek() const
{
  return m_top;
}


bool StackOfChar::isEmpty() const
{
  return(m_top == nullptr);
}
