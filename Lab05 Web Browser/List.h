#ifndef LIST_H
#define LIST_H
#include "ListInterface.h"
#include "Node.h"

template <typename T>
class List : public ListInterface<T>
{
  private:
    Node<T>* m_front;
    int m_length;
  public:
    List();
    virtual T getEntry(int index) const;
    virtual void insert(int index, T entry);
    virtual void remove(int index);
    virtual void clear();
    virtual void setEntry(int index, T entry);
    virtual int length() const;

    //will delete all entries after a certain index
    virtual void deleteAfter(int index);
};
#include "List.cpp"
#endif
