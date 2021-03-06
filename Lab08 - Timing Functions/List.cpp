/**
 * @file List.cpp
 * @author Paul Stuever
 * @brief This file is the implementation for the List data structure we have created.
 * @assignment EECS268 Lab 08 - Timing
 * @date 2021-11-17
 * 
 * 
 */

#include <iostream>
#include "Node.h"


template <typename T>
List<T>::List()
{
  m_front = nullptr;
  m_length = 0;
}

template <typename T>
T List<T>::getEntry(int index) const
{
  if(index < m_length && index >= 0)
  {
      Node<T>* jumper = m_front;

      for(int i = 0; i < index; i++)
      {
          jumper = jumper->getNext();
      }
      return(jumper->getEntry());
  }
  else{
      throw(std::runtime_error("Invalid Index"));
  }
}

template <typename T>
void List<T>::insert(int index, T entry)
{
  if(index < 0 || index > m_length)
  {
    throw std::runtime_error("Undefined index");
  }


  Node<T>* newNode = new Node<T>(entry);
  if(index == 0 || m_front == nullptr)
  {
    m_front = newNode;
    m_length++;
  }

  else
  {
    Node<T>* jumper = m_front;

    while(jumper->getNext() != nullptr)
    {
      jumper = jumper->getNext();
    }

    jumper->setNext(newNode);
    m_length++;
  }

}

template <typename T>
void List<T>::remove(int index)
{
  Node<T>* target = m_front;
  Node<T>* oneBefore = m_front;

  if(index > m_length || index < 0)
  {
    throw(std::runtime_error("Invalid index!\n"));
  }

  else if(index == 0)
  {
    m_front = m_front->getNext();
    m_length--;
    delete target;
    oneBefore = nullptr;
  }

  else
  {
      for(int i = 0; i<index; i++)
      {
        target = target->getNext();
      }
      oneBefore->setNext(target->getNext());
      delete target;
      oneBefore = nullptr;
      m_length--;
  }
}

template <typename T>
void List<T>::clear()
{
  Node<T>* target = m_front;

  while(m_front != nullptr)
  {
    target = m_front->getNext();
    delete m_front;
    m_front = target;
  }
}

template <typename T>
void List<T>::setEntry(int index, T entry)
{
  if(index > m_length || index < 0)
  {
    throw(std::runtime_error("Invalid index!\n"));
  }
  else
  {
    Node<T>* target = m_front;
    for(int i = 0; i<index; i++)
    {
      target = target->getNext();
    }
    target->setEntry(entry);
    target = nullptr;
  }
}

template <typename T>
int List<T>::length() const
{
  return(m_length);
}
