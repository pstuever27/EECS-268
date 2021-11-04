/** -----------------------------------------------------------------------------
 *
 * @file: Queue.h
 * @author Paul Stuever
 * Assignment: EECS268 Lab04 Elevator Action!
 * @brief: Header file for Queue.cpp. Inherits from QueueInterface.h
 * @date: 10/6/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include "QueueInterface.h"
#include <string>

template <typename T>
class Queue : public QueueInterface<T>
{
 private:
    Node<T>* m_front;
    Node<T>* m_back;
 public:
 /**
  * @pre none
  * @post Will set m_front and m_back to nullptr
  * @param none
  * @throw none
  **/ 
 Queue();

 /**
  * @brief Deconstructor for Queue. Deletes m_front and m_back
  **/ 

 ~Queue();

 /**
  * @pre Requires function to be called
  * @post Will either set the new entry to both front and back (if queue is empty), or set the entry to the back.
  * @param entry
  * @throw none
  **/ 
 void enqueue(T entry);

 /**
  * @pre Requires objects to be in the queue
  * @post Will get rid of the oldest value in the queue, and will make m_front the next thing in the queue
  * @param none
  * @throw std::runtime_error if queue is already empty
  **/ 
 void dequeue();

 /**
  * @pre Requires the queue to have stuff in it
  * @post Will return the front entry in the queue
  * @param none
  * @throw std::runtime_error if the queue is empty.
  **/ 
 T peekFront() const;

 /**
  * @pre None
  * @post Will return a bool with information on if the queue is empty or not.
  * @param none
  * @throw none
  **/ 
 bool isEmpty() const;
};
#include "Queue.cpp"
#endif
