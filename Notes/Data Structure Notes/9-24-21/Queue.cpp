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