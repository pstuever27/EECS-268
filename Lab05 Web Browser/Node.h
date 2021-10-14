/** -----------------------------------------------------------------------------
 *
 * @file: Node.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: Header file for Node.cpp
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef NODE_H
#define NODE_H
#include <string>

template <typename T>
class Node
{
	private:
	T m_entry;
	Node<T>* m_next;

	public:
	/**
   * @pre This needs the entry passed in from StackOfChars
   * @post This will set m_next to nullptr and m_entry to the entry that is passed in
   * @return none
   */
	Node(T entry);

	/**
   * @pre This just needs m_entry to be set in the constructor
   * @post Afterwards, we will get the entry
   * @return m_entry
   */
	 T getEntry() const;

	/**
   * @pre This needs the entry passed in from the function that called it
   * @post Afterward, we will get m_entry set to the new entry
   * @return void
   */
	 void setEntry(T entry);

	/**
   * @pre For this, we need setNext to happen first, or else we will just return null
   * @post After, we will get the next entry in the stack
   * @return Node* m_next
   */
	 Node<T>* getNext() const;

	/**
   * @pre We need a pointer value to be passed in from the caller
   * @post Afterward, we will have the next value set
   * @return void
   */
	 void setNext(Node<T>* next);

};
#include "Node.cpp"
#endif
