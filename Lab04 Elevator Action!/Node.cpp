/** -----------------------------------------------------------------------------
 *
 * @file: Node.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: Node class that will be used to get and set the entries in the stack.
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include "Node.h"

template<typename T>
Node::Node(T entry)
{
  m_entry = entry;
  m_next = nullptr;
}

template<typename T>
T Node::getEntry() const
{
  return m_entry;
}

template<typename T>
void Node::setEntry(T entry)
{
  m_entry = entry;
}

template<typename T>
Node<T>* Node::getNext() const
{
  return(m_next);
}

template<typename T>
void Node::setNext(Node<T>* next)
{
  m_next = next;
}
