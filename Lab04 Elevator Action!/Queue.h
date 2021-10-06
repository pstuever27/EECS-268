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
 Queue();
 ~Queue();
 void enqueue(T entry);
 void dequeue();
 T peekFront() const;
 bool isEmpty() const;
};
#include "Queue.cpp"
#endif
