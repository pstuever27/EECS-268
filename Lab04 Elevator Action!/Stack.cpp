#include <iostream>
#include <string>
#include "Stack.h"

template<typename T>
Stack::Stack()
{
  m_top = nullptr;
  newTop = nullptr;
}

template<typename T>
Stack::Stack(const Stack& orig)
{
  m_top->getEntry();
}

template<typename T>
Stack::~Stack()
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

template<typename T>
void Stack::operator=(const Stack& rhs)
{}

template<typename T>
void Stack::push(T entry)
{
  newTop = new Node(entry);
  newTop->setNext(m_top);
  m_top = newTop;
  newTop = nullptr;
  delete newTop;
}

template<typename T>
void Stack::pop()
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

template<typename T>
char Stack::peek() const
{
  if(m_top == nullptr)
  {
    throw(std::runtime_error("Stack Empty"));  //Stack empty if true
  }else
  {
  return (m_top->getEntry());
  }
}

template<typename T>
bool Stack::isEmpty() const
{
  return(m_top == nullptr);
}
