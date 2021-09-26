#ifndef NODE_H
#define NODE_H

//Adding template information (see notes)
template <typename T>
class Node
{
	private:
	int m_entry;
	Node<T>* m_next;
	
	public:
	Node(T entry);
	int getEntry() const;
	void setEntry(T entry);
	Node<T>* getNext() const;
	void setNext(Node<T>* next);
};

#include "Node.cpp" //has to go down here...for some reason...
#endif