#include <stdexcept>
#include <iostream>
#include <string>

template <typename Item, typename Key>
BST<Item, Key>::BST()
{
    m_root = nullptr;
    m_jumper = nullptr;
}

template <typename Item, typename Key>
Item BST<Item, Key>::recSearch(Key searchTerm, BNode<Item>* curNode) const
{
    if()

}

template <typename Item, typename Key>
void BST<Item, Key>::add(Item entry)
{
    BNode<Item>* newNode = new BNode<Item>(entry);
    if(m_root == nullptr)
    {
        m_root = newNode;
    }
    else
    {
        m_jumper = m_root;
    
        if(entry<m_jumper->getEntry())
        {
            m_jumper->setLeftPtr(newNode);
        }
        else if(entry>m_jumper->getEntry())
        {
            m_jumper->setRightPtr(newNode));
        }
        else if(entry == m_jumper->getEntry())
        {
            throw(std::runtime_error("Duplicate detected!\n"));
        }
    }
    
}

template <typename Item, typename Key>
void BST<Item, Key>::clear()
{
    m_root = nullptr;
}

template <typename Item, typename Key>
Item BST<Item, Key>::search(Key key) const
{
    m_jumper = m_root;
    Item temp;

        try
        {
            temp = recSearch(key, m_jumper);  
            return(temp);  
        }
        catch(const std::exception& e)
        {
            std::cout << "Entry not found!\n";
        }
}

template <typename Item, typename Key>
void BST<Item, Key>::remove(Key key)
{

}