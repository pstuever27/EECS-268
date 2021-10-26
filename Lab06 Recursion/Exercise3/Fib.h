#ifndef FIB_H
#define FIB_H
#include <iostream>

class Fib
{
private:
    int m_oneback;
    int m_twoback;
public:
    Fib();
    int ith(int input, int number);
    bool doesContain(int number, int index);
};
#endif
