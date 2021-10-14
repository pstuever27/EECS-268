//two member variables:
  //LinkedList name->insert()
  //int current
#ifndef BROWSERHISTORY_H
#define BROWSERHISTORY_H
#include "ListInterface.h"
#include "LinkedList.h"
#include "BrowserHistoryInterface.h"


class BrowserHistory
{
private:
  LinkedList Record;
  int current;
public:
  BrowserHistory();
  ~BrowserHistory();
  void navigateTo(std::string url);
  void forward();
  void back();
  std::string current() const;
  copyCurrentHistory(ListInterface<string>& destination);
};
#include "BrowserHistory.cpp"
#endif