#include <iostream>
#include <string>
#include "StackOfChar.h"

template <typename char>
StackOfChar<char>::StackOfChar()
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

}

char StackOfChar::peek() const
{
  return m_top;
}

bool StackOfChar::isEmpty() const
{
  return(m_top == nullptr);
}
