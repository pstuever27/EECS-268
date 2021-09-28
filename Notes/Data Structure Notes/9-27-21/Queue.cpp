template <typename T>
Queue::Queue()
{
    m_front = nullptr;
    m_back = nullptr;
}
template <typename T>
void Queue::enqueue(T entry)
{
    Node<T>* temp = new Node(entry);
    if(m_front == nullptr)
    {
        m_front = temp;
    }
    m_back->setNext();
    m_back = temp;
}

template<typename T>
void Queue::dequeue()
{
    if(m_front == nullptr)
    {
        throw{ //this is wrong, but general concept of catching this here
            std::cout << "Runtime Error!"
        }
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