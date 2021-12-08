/**
 * @file BNode.h
 * @author Paul Stuever
 * @brief Header file for BNode.cpp
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#ifndef BNODE_H
#define BNODE_H
#include <string>

template <typename T>
class BNode {
private:
  T m_entry;
  BNode<T>* m_leftPtr;
  BNode<T>* m_rightPtr;

public:
/**
 * @brief Construct a new BNode object
 * 
 * @param will take in value to set m_entry to
 */
  BNode(T value);

  /**
   * @brief Set the Left Ptr object 
   */
  void setLeftPtr(BNode<T>* curNode);

  /**
   * @brief Set the Right Ptr object
   */
  void setRightPtr(BNode<T>* curNode);

  /**
   * @brief Get the Left Ptr object 
   */
  BNode<T>* getLeftPtr() const;

  /**
   * @brief Get the Right Ptr object
   */
  BNode<T>* getRightPtr() const;

  /**
   * @brief Get the Entry object
   */
  T getEntry() const;

};
#include "BNode.cpp"
#endif
