#ifndef PARSER_H
#define PARSER_H
#include "Node.h"
#include "StackOfChar.h"

class Parser
{
public:
  Parser();
  void runParse();
  ~Parser();

private:

int m_length;
StackOfChar<char> Stack();

};
#endif