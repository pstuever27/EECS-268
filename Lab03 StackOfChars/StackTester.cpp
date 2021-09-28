#include "StackTester.h"
#include <iostream>
#include <string>

StackTester::StackTester()
{
    StackTest = nullptr;
}

void StackTester::runTests()
{
    test01();
    test02();
    test03();
    test04();
}

void StackTester::test01()
{
    StackTest = new StackOfChar();

    bool flag;

    flag = StackTest->isEmpty();

    if(flag)
    {
        std::cout << "New stack is empty: PASSED\n";
    }
    if(flag == false)
    {
        std::cout << "New stack is empty: FAILED\n";
    }
    delete StackTest;
}

void StackTester::test02()
{
    StackTest = new StackOfChar();

    char value = 't';
    bool flag;

    StackTest->push(value);
    flag = StackTest->isEmpty();

    if(flag == false)
    {
        std::cout << "Pushing on empty stack makes it not-empty: PASSED\n";
    }
    if(flag)
    {
        std::cout << "Pushing on empty stack makes it not-empty: FAILED\n";
    }
    StackTest->pop();
    delete StackTest;
}

void StackTester::test03()
{
    bool flag;
    char value = 't';
    StackTest = new StackOfChar();

    StackTest->push(value);
    StackTest->pop();
    flag = StackTest->isEmpty();

    if(flag)
    {
        std::cout << "Popping all elements so that isEmpty returns true: PASSED\n";
    }
    if(flag == false)
    {
        std::cout << "Popping all elements so that isEmpty returns true: FAILED\n";
    }
    delete StackTest;
}

void StackTester::test04()
{
    StackTest = new StackOfChar();
    char value = 't';

    StackTest->push(value);
    if(value == StackTest->peek())
    {
        std::cout << "Pushing character and then peeking works: PASSED\n";
    }
    if(value != StackTest->peek())
    {
        std::cout << "Pushing character and then peeking works: FAILED\n";
    }
    StackTest->pop();
    delete StackTest;
}

StackTester::~StackTester()
{
}
