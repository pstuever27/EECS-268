/** -----------------------------------------------------------------------------
 *
 * @file: Executive.h
 * @author Paul Stuever
 * Assignment: EECS268 Lab04 Elevator Action!
 * @brief: Header file for Executive.cpp
 * @date: 10/6/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Stack.h"
#include "Queue.h"
#include <string>

class Executive{ 

public:
  /**
   * @pre takes in the filename from main
   * @post sets m_filename to argv, and sets the pointers to null.
   * @return none
   */ 
  Executive(std::string argv);

  /**
   * @brief Destructor for Executive. Deletes Elevator and Line
   */ 
  ~Executive();

  /**
   * @pre Requires the filename to be valid and the stack/queue to be working properly.
   * @post Will run the program from the file given
   * @return void
   */ 
  void run();

private:
  Stack<std::string>* Elevator;
  Queue<std::string>* Line;
  std::string m_fileName;
};
#endif
