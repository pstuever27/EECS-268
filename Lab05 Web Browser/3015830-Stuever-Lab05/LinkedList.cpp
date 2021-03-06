#include <iostream>
//#include "Node.h"

#include <string>

#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
  m_front = nullptr;
  m_length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
  if(m_front != nullptr)
  {
    m_front = nullptr;
  }
  delete[] m_front;
}


template <typename T>
T LinkedList<T>::getEntry(int index) const
{
  if(index <= m_length && index >= 0)
  {
      Node<T>* jumper = m_front;

      for(int i = 0; i < index; i++)
      {
          jumper = jumper->getNext();
      }
      return(jumper->getEntry());
  }
  else
  {
      throw(std::runtime_error("Invalid Index"));
  }
}

template <typename T>
void LinkedList<T>::insert(int index, T entry)
{
  if(index < 0 || index > m_length)
  {
    throw std::runtime_error("Undefined index");
  }


  Node<T>* newNode = new Node<T>(entry);
  if(index == 0)
  {
    newNode->setNext(m_front);
    m_front->setEntry(entry);
    m_length++;
  }

  else if(index == m_length)
  {
    Node<T>* jumper = m_front;

      for(int i = 0; i<m_length; i++)
      {
        jumper = jumper->getNext();
      }
    jumper->setNext(newNode);
    m_length++;
  }

  else
  {
    Node<T>* jumper = m_front;
    Node<T>* oneBefore = m_front;

    for(int i = 0; i<index; i++)
    {
      oneBefore = oneBefore->getNext();
    }

    oneBefore->setNext(newNode);
    newNode->setNext(jumper);
  }
}

template <typename T>
void LinkedList<T>::remove(int index)
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
void LinkedList<T>::clear()
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
void LinkedList<T>::setEntry(int index, T entry)
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
    delete target;
  }
}

template <typename T>
int LinkedList<T>::length() const
{
  return(m_length);
}

template <typename T>
void LinkedList<T>::deleteAfter(int index)
{
  
}
