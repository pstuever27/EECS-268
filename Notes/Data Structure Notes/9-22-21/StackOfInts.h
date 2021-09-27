#ifndef STACK_H
#define STACK_H

#include "StackInterface.h"
#include "Node.h"

template <typename T>
class Stack : public StackInterface<T>
{
	private:
	Node<T>* m_top;
	
	public:
	Stack();
	virutal void pop();
	virtual void push(T entry);
	virtual bool isEmpty() const;
	virtual T peek() const;
	
};
#include "Stack.cpp"
#endif 