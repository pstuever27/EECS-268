#ifndef STACK_H
#define STACK_H

#include "Node.h"
#include "StackInterface.h"

template <typename T>
class Stack : public StackInterface<T>
{
	private:
	Node<T>* m_top;
	Node<T>* newTop;

	public:
       /**
       * @pre none
       * @post Afterward, we will get m_top and m_newtop set to nullptr
       * @param none
       * @throw none
       **/
	Stack();

       /**
       * @pre This needs the original top of the stack to be passed in
       * @post Afterward, it will set the first value of the stack to m_top so that there are no issues
       * @param orig, the first entry in the stack
       * @throw none
       **/
	Stack(const Stack& orig);

       /**
        * @brief Deconstructor for Stack, deletes m_top and newTop
        */
        ~Stack();

	void operator=(const Stack& rhs);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @param entry, the element to be added to the stack
       * @throw None
       **/
	void push(T entry);

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
	T peek() const; //should peek throw an exception?

       /**
       * @pre Needs empty stack to return true
       * @post Lets us know if it's empty
       * @param none
       * @throw none
       **/
	bool isEmpty() const;

};
#include "Stack.cpp"
#endif
