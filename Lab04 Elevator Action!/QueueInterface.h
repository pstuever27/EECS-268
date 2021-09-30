#ifndef QUEUEINTERFACE_H
#define QUEUEINTERFACE_H

template <typename T>
class QueueInterface
{
    public:
    virtual void enqueue(T entry) = 0;
    virtual void dequeue() = 0; //doesn't need parameters, only takes from the back
    virtual T peekFront() const = 0; //only looks at front, no parameters
    virtual bool isEmpty() const = 0; //just looks, so no parameters
};
#endif
