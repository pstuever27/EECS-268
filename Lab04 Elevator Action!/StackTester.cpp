/** -----------------------------------------------------------------------------
 *
 * @file: StackTester.cpp
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: This file will run 6 tests to see if the stack is working properly
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
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
    test05();
    test06();
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

void StackTester::test05()
{
    StackTest = new StackOfChar();
    bool empty;
    empty = StackTest->isEmpty();
    if(empty)
    {
        try
        {
            StackTest->pop();
        }
        catch(std::exception& e)
        {
            empty = false;
            std::cout << "Attempting to pop empty stack returns an error: PASSED\n";
        }
    }else if(!empty)
    {
        std::cout << "Attempting to pop empty stack returns an error: FAILED\n";
    }
    delete StackTest;
}

void StackTester::test06()
{
    StackTest = new StackOfChar();
    bool empty;
    empty = StackTest->isEmpty();
    if(empty)
    {
        try
        {
            StackTest->peek();
        }
        catch(std::exception& e)
        {
            empty = false;
            std::cout << "Attempting to peek empty stack returns an error: PASSED\n";
        }
    }else if(!empty)
    {
        std::cout << "Attempting to peek empty stack returns an error: FAILED\n";
    }
    delete StackTest;

}
StackTester::~StackTester()
{}
