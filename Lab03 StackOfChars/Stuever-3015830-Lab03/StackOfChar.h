/** -----------------------------------------------------------------------------
 *
 * @file: StackOfChar.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 2
 * @brief: Header file for StackOfChar.cpp (note: not templated)
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKOFCHAR_H
#define STACKOFCHAR_H

#include "Node.h"
#include "StackInterface.h"
//Our stack will implement the StackInterface but of a stack specifically filled with chars.
//We'll learn in lecture how to make a templated Node and then a templated Stack
//if something is weird, maybe try adding <char> to the methods like a template
class StackOfChar : public StackInterface<char>
{
	private:
	Node* m_top;
	Node* newTop;
       
	public:
       /** 
       * @pre none
       * @post Afterward, we will get m_top and m_newtop set to nullptr
       * @param none
       * @throw none
       **/
	StackOfChar();

       /** 
       * @pre This needs the original top of the stack to be passed in
       * @post Afterward, it will set the first value of the stack to m_top so that there are no issues
       * @param orig, the first entry in the stack
       * @throw none
       **/
	StackOfChar(const StackOfChar& orig);

       /**
        * @brief Deconstructor for StackOfChar, deletes m_top and newTop
        */ 
        ~StackOfChar();

	void operator=(const StackOfChar& rhs);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @param entry, the element to be added to the stack
       * @throw None
       **/
	void push(char entry);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre Stack is non-empty
       * @post Top element is removed from the stack
       * @param None
       * @throw std::runtime_error if pop attempted on empty stack
       **/
	void pop();

       /** 
       * @pre Needs an entry in the stack
       * @post Gives us the top entry in the stack
       * @param none
       * @throw std::runtime_error if peek attempted on empty stack
       **/
	char peek() const; //should peek throw an exception?

       /** 
       * @pre Needs empty stack to return true
       * @post Lets us know if it's empty
       * @param none
       * @throw none
       **/
	bool isEmpty() const;

};
#endif
