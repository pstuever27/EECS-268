/** -----------------------------------------------------------------------------
 *
 * @file: Node.cpp      
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Node class that will be used to get and set the entries in the stack.
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include "Node.h"
Node::Node(char entry)
{
  m_entry = entry;
  m_next = nullptr;
}

char Node::getEntry() const
{
  return m_entry;
}

void Node::setEntry(char entry)
{
  m_entry = entry;
}

Node* Node::getNext() const
{
  return(m_next);
}

void Node::setNext(Node* next)
{
  m_next = next;
}
