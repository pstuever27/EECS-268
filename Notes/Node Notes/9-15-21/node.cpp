//node.cpp
#include "node.h"

node::node(int entry)
{
    m_entry = entry;
    m_next = nullptr;
}

int node::getEntry() const
{
    return(m_entry);
}

void node::setEntry(int entry)
{
    m_entry = entry;
}

node* node::getNext() const
{
    return(m_next);
}

void node::setNext(node* next)
{
    m_next = next;
}
