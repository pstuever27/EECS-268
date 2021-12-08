/**
 * @file BSTInterface.cpp
 * @author Paul Stuever
 * @brief Interface for the BST
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#ifndef BSTINTERFACE_H
#define BSTINTERFACE_H

template <typename Item, typename Key>
class BinarySearchTreeInterface
{
    public:
    virtual ~BinarySearchTreeInterface(){}
    virtual void add(Item entry) = 0; //throws std::runtime_error if duplicate added
    virtual Item search(Key key) const = 0; //throws std::runtime_error if not in tree
    virtual void clear() = 0; //Empties the tree
    //virtual void remove(Key key) = 0; //throws std::runtime_error if not in tree

    //For the following methods, each method will take a function as a parameter
    //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
    //The function you pass in will need to a static method
    virtual void visitPreOrder(void visit(Item)) const = 0; //Visits each node in pre order
    virtual void visitInOrder(void visit(Item)) const = 0; //Visits each node in in order
    virtual void visitPostOrder(void visit(Item)) const = 0; //Visits each node in post order
};
#endif