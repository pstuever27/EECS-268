#include "BrowserHistory.cpp"

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

void navigateTo(std::string url)
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

void forward()
{
    int length = Record->length();
    if(m_current == length)
    {
        throw(std::runtime_error("Can't go forward anymore!"));
    }

    m_current++;
}

void back()
{
    if(m_current == 0)
    {
        throw(std::runtime_error("Can't go back anymore!"))
    }

    m_current--;
}

std::string current() const
{
    return(Record->getEntry(m_current));
}

void BrowserHistory::copyCurrentHistory(ListInterface<string>& destination)
{
    int length = Record->length();
    
    for(int i = 0; i<length; i++)
    {
        destination->setEntry(Record->getEntry(i), i);
    }
    
}