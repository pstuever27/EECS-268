/** -----------------------------------------------------------------------------
 *
 * @file: StackInterface.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 8
 * @brief: Stack interface to be used by StackOfChar.h
 * @date:  11/17/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H

#include <stdexcept>

template <typename T>
class StackInterface
{
	public:

	/**
   * @brief these are all virtual functions that will be used by Stack
   */
	virtual void push(T entry) = 0;
	virtual void pop() = 0;
	virtual T peek() const = 0;
	virtual bool isEmpty() const = 0;
  virtual ~StackInterface() {} //virtual destructor

};

#endif
