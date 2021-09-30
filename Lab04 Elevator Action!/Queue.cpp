template <typename T>
Queue<T>::Queue()
{
    m_front = nullptr;
    m_back = nullptr;
}
template <typename T>
void Queue<T>::enqueue(T entry)
{
    Node<T>* temp = new Node<T>(entry);
    if(m_front == nullptr)
    {
        m_front = temp;
    }
    m_back->setNext();
    m_back = temp;
}

template<typename T>
void Queue<T>::dequeue()
{
    if(m_front == nullptr)
    {
        throw(std::runtime_error("Queue already empty!\n"));
    }else if (m_front == m_back)
    {
        delete m_front; //you can delete the value either one since they are the same.
        m_front = nullptr;
        m_back = nullptr;
    }
    else
    {
        Node<T>* newFront = m_front; //This is the actual dequeue. It starts newFront and m_front off on the same Node, then sets m_front to the next Node.
        m_front = newFront->getNext();
        delete newFront; //Deletes this since it is a temp object.
    }
}

template<typename T>
T Queue<T>::peekFront() const
{
  if(m_front == nullptr)
  {
    throw(std::runtime_error("Queue empty!"));
  }else
  {
  return m_front->getEntry();
 }
}

template<typename T>
bool Queue<T>::isEmpty() const
{
  return(m_front == nullptr && m_back == nullptr);
}
