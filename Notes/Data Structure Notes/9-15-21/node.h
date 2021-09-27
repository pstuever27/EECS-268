//node.h
#ifndef NODE_H
#define NODE_H
 
class node
{
private:

    int m_entry;
    node* m_next;

public:

    node(int entry);
    int getEntry() const;
    void setEntry(int entry);
    node* getNext() const;
    void setNext(node* entry);

};
#endif