#ifndef BST_H
#define BST_H
#include "BSTInterface.h"
#include "BNode.h"

template <typename Item, typename Key>
class BST : public BSTInterface<Item, Key>
{
private:
  BNode<Item>* m_root;
  void add(Item entry);
  Item recSearch(Key searchTerm, BNode<Item>* curNode) const;

public:
  BST(); //sets m_root to nullptr
  Item search(Key searchTerm) const;
};
#include "BST.cpp"
