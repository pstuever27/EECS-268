#include "BrowserHistory.h"
#include "LinkedList.h"
#include <stdexcept>

BrowserHistory::BrowserHistory()
{
    Record = new LinkedList();
    m_current = 0;
}

BrowserHistory::~BrowserHistory()
{
    Record = nullptr;
    delete Record;
}

void BrowserHistory::navigateTo(std::string url)
{
    int length = Record->length();
    if(m_current == length)
    {
        Record->setEntry(length, url);
    }
    else
    {
        while(length>m_current)
        {
            Record->remove(length);
            length--;
        }
        Record->setEntry(length, url);
    }
}

void BrowserHistory::forward()
{
    int length = Record->length();
    if(m_current == length)
    {
        throw(std::runtime_error("Can't go forward anymore!"));
    }

    m_current++;
}

void BrowserHistory::back()
{
    if(m_current == 0)
    {
        throw(std::runtime_error("Can't go back anymore!"));
    }

    m_current--;
}

std::string BrowserHistory::current() const
{
    return(Record->getEntry(m_current));
}

void BrowserHistory::copyCurrentHistory(ListInterface<std::string>& destination)
{
    int length = Record->length();
    
    for(int i = 0; i<length; i++)
    {
        destination = setEntry(Record->getEntry(i), i);
    }
    
}