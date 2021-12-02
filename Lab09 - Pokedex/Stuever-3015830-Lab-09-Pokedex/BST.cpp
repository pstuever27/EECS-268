/**
 * @file BST.cpp
 * @author Paul Stuever
 * @brief Will complete the different functions on the BST such as adding, searching, and printing
 * @assignment EECS 268 Lab09 - Pokedex
 * @date 2021-12-01
 */

#include <stdexcept>
#include <iostream>
#include <string>

template <typename Item, typename Key>
BST<Item, Key>::BST()
{
    m_root = nullptr;
}

template <typename Item, typename Key>
BST<Item, Key>::~BST()
{
    m_root = nullptr;
    delete[] m_root;
}

template <typename Item, typename Key>
Item BST<Item, Key>::recSearch(Key key, BNode<Item>* curNode) const
{
    if (curNode == nullptr)
    {
        Item none;
        return(none);
    }
    else if (curNode->getEntry() == key)
    {
        return(curNode->getEntry());
    }

    else if (curNode->getEntry() > key)
    {
        if(curNode -> getLeftPtr() != nullptr)
        {
            recSearch(key, curNode->getLeftPtr());
        }
    }
    else if (curNode->getEntry() < key)
    {
        if(curNode -> getRightPtr() != nullptr)
        {
            recSearch(key, curNode->getRightPtr());
        }
    }
    else if(curNode -> getLeftPtr() != nullptr && curNode -> getRightPtr() != nullptr)
    {
        return (curNode->getEntry());
    }
}

template <typename Item, typename Key>
void BST<Item, Key>::add(Item entry)
{
    BNode<Item>* newNode = new BNode<Item>(entry);

    m_root = addHelper(m_root, newNode);
}

template <typename Item, typename Key>
BNode<Item>* BST<Item, Key>::addHelper(BNode<Item>* subTree, BNode<Item>* curNode)
{
    if(subTree == nullptr)
    {
        return(curNode);
    }
    Item temp = curNode->getEntry();
    if(temp < subTree->getEntry())
    {
        if(subTree->getLeftPtr() == nullptr)
        {
            subTree->setLeftPtr(curNode);
        }
        else
        {
        BNode<Item>* next = addHelper(subTree->getLeftPtr(), curNode);
        subTree->setLeftPtr(next);
        }
    }
    else if(temp > subTree->getEntry())
    {
        if(subTree->getRightPtr() == nullptr)
        {
            subTree->setRightPtr(curNode);
        }
        else
        {
            BNode<Item>* next = addHelper(subTree->getRightPtr(), curNode);
            subTree->setRightPtr(next);
        }
    }
    return(subTree);
}

template <typename Item, typename Key>
void BST<Item, Key>::clear()
{
    m_root = nullptr;
}

template <typename Item, typename Key>
Item BST<Item, Key>::search(Key key) const
{
    BNode<Item>* temp = m_root;
    Item m_Poke;
    try
    {
       m_Poke = recSearch(key, temp);
       std::cout << m_Poke.getAmName();
        std::cout << " " << m_Poke.getNumber();
        std::cout << " " << m_Poke.getJapanName() << '\n';
       return(m_Poke);
    }
    catch(const std::exception& e)
    {
        std::cout << "Pokemon not found!\n";
    }
    
}

//template <typename Item, typename Key>
//void BST<Item, Key>::remove(Key key)
//{

//}

template <typename Item, typename Key>
void BST<Item, Key>::PreOrderHelper(BNode<Item>* temp, void visit(Item)) const
{
    if(temp != nullptr)
    {
        visit(temp->getEntry());
        PreOrderHelper(temp->getLeftPtr(), visit);
        PreOrderHelper(temp->getRightPtr(), visit);
    }
}

template <typename Item, typename Key>
void BST<Item, Key>::InOrderHelper(BNode<Item>* temp, void visit(Item)) const
{
    if(temp != nullptr)
    {
        InOrderHelper(temp->getLeftPtr(), visit);
        visit(temp->getEntry());
        InOrderHelper(temp->getRightPtr(), visit);
    }
}

template <typename Item, typename Key>
void BST<Item, Key>::PostOrderHelper(BNode<Item>* temp, void visit(Item)) const
{   
    if(temp != nullptr)
    {
        PostOrderHelper(temp->getLeftPtr(), visit);
        PostOrderHelper(temp->getRightPtr(), visit);
        visit(temp->getEntry());
    }
}

template <typename Item, typename Key>
void BST<Item, Key>::visitPreOrder(void visit(Item)) const 
{
    BNode<Item>* temp = m_root;
    if(temp != nullptr)
    {
        PreOrderHelper(temp, visit);
    }
    temp = nullptr;
}

template <typename Item, typename Key>
void BST<Item, Key>::visitInOrder(void visit(Item)) const 
{
    BNode<Item>* temp = m_root;
    InOrderHelper(temp, visit);
    temp = nullptr;
}

template <typename Item, typename Key>
void BST<Item, Key>::visitPostOrder(void visit(Item)) const
{
    BNode<Item>* temp = m_root;
    PostOrderHelper(temp, visit);
    temp = nullptr;
}
