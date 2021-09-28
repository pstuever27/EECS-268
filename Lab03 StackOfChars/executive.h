//Done
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <iostream>
#include "Node.h"
#include <iostream>
#include <string>

class executive{

public:
  executive(std::string argv);
  ~executive();
  void run();

private:
  std::string m_action;
};
#endif
