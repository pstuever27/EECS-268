/**
 * @file BNode.cpp
 * @author Paul Stuever
 * @brief Binary node file for the BST
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#include <stdexcept>
template <typename T>
BNode<T>::BNode(T entry)
{
  m_entry = entry;
  m_leftPtr = nullptr;
  m_rightPtr = nullptr;
}

template <typename T>
void BNode<T>::setLeftPtr(BNode<T>* curNode)
{
  m_leftPtr = curNode;
}

template <typename T>
void BNode<T>::setRightPtr(BNode<T>* curNode)
{
  m_rightPtr = curNode;
}

template <typename T>
BNode<T>* BNode<T>::getLeftPtr() const
{
  
  return(m_leftPtr);
}

template <typename T>
BNode<T>* BNode<T>::getRightPtr() const
{
  return(m_rightPtr);
}

template <typename T>
T BNode<T>::getEntry() const
{
  return(m_entry);
}

