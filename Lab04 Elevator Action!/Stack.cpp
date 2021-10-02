#include <iostream>
#include <string>

template<typename T>
Stack<T>::Stack()
{
  m_top = nullptr;
  newTop = nullptr;
}

template<typename T>
Stack<T>::Stack(const Stack& orig)
{
  m_top->getEntry();
}

template<typename T>
Stack<T>::~Stack()
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
void Stack<T>::operator=(const Stack& rhs)
{}

template<typename T>
void Stack<T>::push(T entry)
{
  newTop = new Node(entry);
  newTop->setNext(m_top);
  m_top = newTop;
  newTop = nullptr;
  delete newTop;
}

template<typename T>
void Stack<T>::pop()
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
char Stack<T>::peek() const
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
bool Stack<T>::isEmpty() const
{
  return(m_top == nullptr);
}
