template <typename T>
LinkedList<T> :: LinkedList()
{
    m_front = nullptr;
    m_length = 0;
}
template <typename T>
T LinkedList<T> :: getEntry(int index) const
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

template <typename T>
void LinkedList<T> :: insert(int index, T entry)
{
    
	if(index < 0 || index > m_length)
	{
		throw std::runtime_error(“Undefined index”);
	} 
    Node<T>* newNode = new Node<T>(entry);
    else if(index == 0)
    {
        newNode->setNext(m_front);
	    m_front->setEntry(newNode);
        m_length++
    }
	else if(index == m_length)
	{
        Node<T>* jumper = m_front;
        for(int i = 0; i<m_length; i++)
        {
	    jumper = jumper->getNext();
        }
        jumper = jumper->setNext(newNode); 	
        m_length++	
	}
    else
    { 
        Node<T>* jumper = m_front;
        Node<T>* oneBefore = m_front;
	   for(int i = 0; i<index; i++)
	    {
            jumper = jumper->getNext();
        }
	   for(int i = 0; i<--length; i++)
        {
             oneBefore = oneBefore->getNext();
        }	
        
        oneBefore->setNext(newNode);
        newNode->setNext(jumper);
        m_length++
	    
	
	}
}

template <typename T>
void List<T>::remove(int index)
{
    Node<T>* target = m_front;
    Node<T>* OneBefore = m_front;

    if(index > m_length || index < 0)
    {
        throw(std::runtime_error("Invalid Index"));
    }
    else if(index == 0)
    {
        m_front = m_front->getNext();
        m_length--;
        delete(target);
        OneBefore = nullptr;
    }
    else
    {
        for(int i = 0; i<index; i++)
        {
            OneBefore = target;
            target = target->getNext();
        }
        OneBefore->setNext(target->getNext());
        delete(target);
        OneBefore = nullptr;
        m_length--;
    }
}
