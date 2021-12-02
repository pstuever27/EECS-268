/**
 * @file BST.h
 * @author Paul Stuever
 * @brief Header file for BST.cpp
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#ifndef BST_H
#define BST_H
#include "BSTInterface.h"
#include "BNode.h"

template <typename Item, typename Key>
class BST : public BinarySearchTreeInterface<Item, Key>
{
private:
  BNode<Item>* m_root;

  /**
   * @pre Requires BST to be created and the user to give a search term
   * @post will search the tree for the desired item
   * @return Item
   **/ 
  Item recSearch(Key value, BNode<Item>* subTree) const;

  /**
   * @pre Is called by add so that it can recursivley add to the tree
   * @post Adds an item to the BST
   * @return BNode<Item>*
   **/ 
  BNode<Item>* addHelper(BNode<Item>* subTree, BNode<Item>* curNode);

public:

/**
   * @pre None
   * @post Constructs BST and sets m_root to nullptr
   * @return none
   **/ 
   BST(); //sets m_root to nullptr

   /**
   * @pre none
   * @post destructor
   * @return none
   **/ 
   ~BST();

   /**
   * @pre will be called from Executive to add an Item to the BST
   * @post Item will be added to the BST
   * @return void
   **/ 
   void add(Item entry); //throws std::runtime_error if duplicate added

   /**
   * @pre Will take in a key from the user
   * @post Will call recSearch to find out if the entry exists in the BST
   * @return Item
   **/ 
   Item search(Key key) const; //throws std::runtime_error if not in tree

   /**
   * @pre none
   * @post sets m_root to nullptr, clearing the tree;
   * @return void
   **/ 
   void clear(); //Empties the tree
   //void remove(Key key); //throws std::runtime_error if not in tree

    //For the following methods, each method will take a function as a parameter
    //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
    //The function you pass in will need to a static method

    /**
   * @pre Is called by its order function
   * @post Prints BST in Pre-Order
   * @return void
   **/ 
   void PreOrderHelper(BNode<Item>* temp, void visit(Item)) const;

   /**
   * @pre Is called by its order function
   * @post Prints BST in In-Order
   * @return void
   **/ 
   void InOrderHelper(BNode<Item>* temp, void visit(Item)) const;

   /**
   * @pre Is called by its order function
   * @post Prints BST in Post-Order
   * @return void
   **/ 
   void PostOrderHelper(BNode<Item>* temp, void visit(Item)) const;

   /**
   * @pre Is to be called from Executive
   * @post Will call its helper
   * @return void
   **/ 
   void visitPreOrder(void visit(Item)) const; //Visits each node in pre order

   /**
   * @pre Is to be called from Executive
   * @post Will call its helper
   * @return void
   **/ 
   void visitInOrder(void visit(Item)) const; //Visits each node in in order

   /**
   * @pre Is to be called from Executive
   * @post Will call its helper
   * @return void
   **/ 
   void visitPostOrder(void visit(Item)) const; //Visits each node in post order
};
#include "BST.cpp"
#endif
