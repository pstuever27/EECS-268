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

	StackOfChar();

	StackOfChar(const StackOfChar& orig);

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

	char peek() const; //should peek throw an exception?
	bool isEmpty() const;

};
#endif
