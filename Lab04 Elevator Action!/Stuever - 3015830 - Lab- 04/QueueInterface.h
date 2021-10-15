/** -----------------------------------------------------------------------------
 *
 * @file: QueueInterface.h
 * @author Paul Stuever
 * Assignment: EECS268 Lab04 Elevator Action!
 * @brief: Interface for the Queue datastructures
 * @date: 10/6/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef QUEUEINTERFACE_H
#define QUEUEINTERFACE_H

template <typename T>
class QueueInterface
{
    /**
    * @brief: This is an interface. All methods will be defined by the queue class.
    **/
    public:
    virtual void enqueue(T entry) = 0;
    virtual void dequeue() = 0; //doesn't need parameters, only takes from the back
    virtual T peekFront() const = 0; //only looks at front, no parameters
    virtual bool isEmpty() const = 0; //just looks, so no parameters
};
#endif
