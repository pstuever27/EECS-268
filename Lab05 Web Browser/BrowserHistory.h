//two member variables:
  //LinkedList name->insert()
  //int current
#ifndef BROWSERHISTORY_H
#define BROWSERHISTORY_H
#include "ListInterface.h"
#include "BrowserHistoryInterface.h"

#include <string>


class BrowserHistory
{
private:
  ListInterface<std::string>* Record;
  int m_current;
public:
  BrowserHistory();
  ~BrowserHistory();
  void navigateTo(std::string url);
  void forward();
  void back();
  std::string current() const;
  void copyCurrentHistory(ListInterface<std::string>& destination);
};
#endif