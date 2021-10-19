#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include "BrowserHistory.h"

class Executive
{
  public:
    Executive(std::string argv);
    ~Executive();
    void run();
  private:
    std::string m_fileName;
    BrowserHistory* History;
};
#endif