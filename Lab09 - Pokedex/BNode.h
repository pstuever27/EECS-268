#ifndef BNODE_H
#define BNODE_H
#include <string>

template <typename T>
class BNode {
private:
  T m_entry;
  BNode<T> m_leftPtr;
  BNode<T> m_rightPtr;

public:
  Bnode(T value);
  void setLeftPtr(BNode<T>* curNode);
  void setRightPtr(Bnode<T>* curNode);
  BNode<T>* getLeftPtr() const;
  BNode<T>* getRightPtr() const;
  T getEntry() const;

};
#include "BNode.cpp"
#endif
