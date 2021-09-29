template <typename T>
LinkedList<T> :: LinkedList()
{
    m_front = nullptr;
    m_length = 0;
}
template <typename T>
LinkedList<T> :: getEntry(int index) const
{
    if(index < m_length && index > 0)
    {
        Node<T>* jumper = m_front;

        for(int i = 0; i < index; i++)
        {
            jumper = jumper->getNext();
        }
        return(jumper->getEntry());
    }
    else{
        throw(std::runtime_error("Invalid Index"));
    }
}