/** -----------------------------------------------------------------------------
 *
 * @file: Node.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: Node class that will be used to get and set the entries in the stack and queue.
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include <string>

template <typename T>
Node<T>::Node(T entry)
{
  m_entry = entry;
  m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const
{
  return m_entry;
}

template <typename T>
void Node<T>::setEntry(T entry)
{
  m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
  return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
  m_next = next;
}
