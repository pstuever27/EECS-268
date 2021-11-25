/**
 * @file Executive.h
 * @author Paul Stuever
 * @brief Header file for Executive.cpp
 * @assignment EECS-268 Lab 8
 * @date 2021-11-17
 * 
 */

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Stack.h"
#include "Queue.h"
#include "List.h"

#include <time.h>


class Executive
{
private:
  Stack<int>* m_Stack;
  Queue<int>* m_Queue;
  List<int>* m_List;

  //used to output times after printing all the lists (you'll see when you run it)
  List<float>* timer;
  int elements;
  int list_elements;
  int fill_time;
public:
  
  /**
   * @brief Sets up our pointers to be used by the different functions and sets the different values used for counting.
   * 
   */
  Executive();

  /**
   * @brief Deconstructor for the Executive Class
   * 
   */
  ~Executive();

  /**
   * @brief First, it will push 1000 elements and then pop the first off. Then, it will fill the stack with 2000 elements, and so on. Will time the pop action each time it recurses.
   * 
   */
  void Stackpop();

  /**
   * @brief Times the deconstructor for Stack by calling for its deletion and timing how long it takes to do so with increasingly large stack sizes.
   * 
   */
  void StackDestructor();

  /**
   * @brief Will time how long it takes to enqueue increasingly large elements into the queue.
   * 
   */
  void Queuedequeue();

  /**
   * @brief Will time how long it takes to print the First element in increasingly large lists.
   * 
   */
  void Listone();

  /**
   * @brief Will time how long it takes to print the Last element in increasingly large lists.
   * 
   */
  void Listlast();

  /**
   * @brief Will first print each iteraton of the increasing stacks, while also tracking the time it takes into another list to keep track. Then, after it is through the numbers, it will give us the results.
   * 
   */
  void Printlist();
};
#endif
