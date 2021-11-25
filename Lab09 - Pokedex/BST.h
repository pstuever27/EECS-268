#ifndef BST_H
#define BST_H
#include "BSTInterface.h"
#include "BNode.h"

template <typename Item, typename Key>
class BST : public BSTInterface<Item, Key>
{
private:
  BNode<Item>* m_root;
  BNode<Item>* m_jumper;
  Item recSearch(Key searchTerm, BNode<Item>* curNode) const;

public:
   BST(); //sets m_root to nullptr
   void add(Item entry); //throws std::runtime_error if duplicate added
   Item search(Key key) const; //throws std::runtime_error if not in tree
   void clear(); //Empties the tree
   void remove(Key key); //throws std::runtime_error if not in tree

    //For the following methods, each method will take a function as a parameter
    //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
    //The function you pass in will need to a static method
   void visitPreOrder(void visit(Item)) const; //Visits each node in pre order
   void visitInOrder(void visit(Item)) const; //Visits each node in in order
   void visitPostOrder(void visit(Item)) const; //Visits each node in post order
};
#include "BST.cpp"
