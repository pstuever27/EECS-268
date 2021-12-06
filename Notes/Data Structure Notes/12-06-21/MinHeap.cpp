//MinHeap.cpp

template <typename T>
void MinHeap<T>::upHeap(int index)
{
	if(index != 0)
	{

        if(m_arr[index] <= m_arr[(index-1)/2])
        {
            T temp = m_arr[(index-1)/2];
            m_arr[(index-1)/2] = m_arr[index];
            m_arr[index] = temp;
            
            upHeap((index-1)/2);
        }
    }
}

template <typename T>
MinHeap<T>::MinHeap()
{
    m_arr = new T[8];
    m_arraySize = 8;
    m_heapSize = 0;
}

template <typename T>
void MinHeap<T>::add(T entry)
{

    if(m_heapSize == m_arraySize)
    {
        resize(); //make more room
    }

    m_arr[m_heapSize] == entry;
    upheap(m_heapSize);
    m_heapSize++;

}