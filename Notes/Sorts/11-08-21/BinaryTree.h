#ifndef BINARYTREE_H
#define BINARYTREE_H
#incude "BNode.h"
template<typename T>
class BinaryTree
{
    private:
    BNode<T>* m_root; //node that has entry, left and right pointers
                      //Assume this class has getters+setters for those members
    
    public:
    BinaryTree(); //set the m_root to nullptr
    void add(T entry); //assume this works lol
    bool isInTree(T entry) const; //Will find out if something is in the tree
    bool recIsInTree(T entry, BNode<T>* curNode);
};
#endif