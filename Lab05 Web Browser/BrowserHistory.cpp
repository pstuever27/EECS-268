BrowserHistory::BrowserHistory()
{
    Record = new LinkedList();
    current = 0;
}

BrowserHistory::~BrowserHistory()
{
    Record = nullptr;
    delete Record;
}

void navigateTo(std::string url)
{
    int length = Record->length();
    if(current == length)
    {
        Record->setEntry(length, url);
    }
    else
    {
        while(length>current)
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
    if(current == length)
    {
        throw(std::runtime_error("Can't go forward anymore!"));
    }

    current++;
}

void back()
{
    if(current == 0)
    {
        throw(std::runtime_error("Can't go back anymore!"))
    }

    current--;
}

std::string current() const
{
    return(Record->getEntry(current));
}

void BrowserHistory::copyCurrentHistory(ListInterface<string>& destination)
{
    int length = Record->length();
    
    for(int i = 0; i<length; i++)
    {
        destination->setEntry(Record->getEntry(i), i);
    }
    
}