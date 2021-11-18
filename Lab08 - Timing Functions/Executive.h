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
  int elements;
  int list_elements;
public:
  Executive();
  ~Executive();
  void Stackpop();
  void StackDestructor();
  void Queuedequeue();
  void Listone();
  void Listlast();
  void Printlist();
};
#endif
