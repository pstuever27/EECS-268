#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <iostream>
#include "Node.h"
#include "Parser.h"
#include "StackTester.h"
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
