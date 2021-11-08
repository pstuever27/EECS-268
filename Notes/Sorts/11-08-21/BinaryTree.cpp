//Assume the contructor and add are written, skipping too other stuff

//constructor
//Add

template<typename T>
bool BinaryTree::isInTree(T entry) const
{
    return(recIsInTree(entry, m_root));
}

template<typename T>
bool BinaryTree<T>::recIsInTree(T entry, BNode<T>* curNode)
{
    if(curNode == nulllptr)
    {
        return(false);
    }
    else if(curNode->getEntry() == entry)
    {
        return(true)
    }
    else
    {
        bool isInLST = recIsInTree(entry, curNode->getLeft());
        bool isInRST = recIsINTree(entry, curNode->getRight());
        return(isInLST || isInRST);
    }

}