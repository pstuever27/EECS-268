#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Stack.h"
#include "Queue.h"

class Executive{

public:

  Executive(std::string argv);
  ~Executive();
  void run();

private:
  Stack<std::string>* Elevator;
  Queue<std::string>* Line;
  std::string m_fileName;
};
#endif
