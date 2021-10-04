//ListInterface

#ifndef LISTINTERFACE_H
#define LISTINTERFACE_H

template<typename T>
class ListInterface
{
public:
    virtual void insert(int index, T entry) = 0;
    virtual void remove(int index) = 0;
    virtual T getEntry(int index)const = 0;
    //more methods to come
};
#endif
