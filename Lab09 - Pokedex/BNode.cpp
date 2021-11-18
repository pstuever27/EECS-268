template <typename T>
BNode::BNode(T entry)
{
  m_entry = entry;
  m_leftPtr = nullptr;
  m_rightPtr = nullptr;
}

template <typename T>
void BNode::setLeftPtr(BNode<T>* curNode)
{
  m_leftPtr = curNode;
}

template <typename T>
void BNode::setRightPtr(BNode<T>* curNode)
{
  m_rightPtr = curNode;
}
