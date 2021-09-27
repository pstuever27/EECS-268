#include <iostream>
#include <string>
#include "StackOfChar.h"

template <typename char>
StackOfChar<char>::StackOfChar()
{
  m_top = nullptr;
  newTop = nullptr;
}

template <typename char>
StackOfChar::StackOfChar(const StackOfChar& orig)
{
  m_top = orig.peek();
}

template <typename char>
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

template <typename char>
void StackOfChar::operator=(const StackOfChar& rhs)
{

}

template <typename char>
void StackOfChar::push(char entry)
{
  newTop = new Node(entry);
  newTop->setNext(m_top);
  m_top = newTop;
}

template <typename char>
void StackOfChar::pop()
{
  newTop = new Node(entry);
  newTop->getNext();
  m_top = newTop;
}

template <typename char>
char StackOfChar::peek() const
{
  return m_top;
}

template <typename char>
bool StackOfChar::isEmpty() const
{
  return(m_top == nullptr);
}
