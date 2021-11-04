/** -----------------------------------------------------------------------------
 *
 * @file: Queue.cpp
 * @author Paul Stuever
 * Assignment: EECS268 Lab04 Elevator Action!
 * @brief: This file defines the methods that will be used to make a Queue for the line. FIFO system.
 * @date: 10/6/21
 *
 ---------------------------------------------------------------------------- **/

#include <string>

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
        m_back = m_front;
    }
    m_back->setNext(temp);
    m_back = temp;
    temp = nullptr;
    delete temp;
}

template <typename T>
Queue<T>::~Queue()
{
    if(m_front != nullptr)
    {
        m_front = nullptr;
    }
    if(m_back != nullptr)
    {
        m_back = nullptr;
    }
    delete[] m_front;
    delete[] m_back;
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
    else if(m_back == nullptr)
    {
        m_front = nullptr;
    }
    else
    {
        std::cout << m_front;
        Node<T>* newFront = m_front->getNext(); //This is the actual dequeue. It starts newFront and m_front off on the same Node, then sets m_front to the next Node.
        delete m_front;
        m_front = newFront;
        newFront = nullptr;
        std::cout << m_front;
        delete newFront;
    }
}

template<typename T>
T Queue<T>::peekFront() const
{
  if(m_front == nullptr)
  {
    throw(std::runtime_error("Queue empty!"));
  }else{
  return m_front->getEntry();
  }
}

template<typename T>
bool Queue<T>::isEmpty() const
{
  return(m_front == nullptr && m_back == nullptr);
}
