#include "StackTester.h"
#include <iostream>
#include <string>

StackTester::StackTester()
{}

void test01()
{
    StackTest = new StackOfChar<char>();

    bool flag = false;

    flag = StackTest.isEmpty();

    if(flag)
    {
        std::cout << "New stack is empty: PASSED";
    }
    if(flag == false)
    {
        std::cout << "New stack is empty: FAILED";
    }
}

void test02()
{
    StackTest = new StackOfChar<char>();

    char value = t;
    bool flag;

    StackTest.push(value);
    flag = StackTest.isEmpty();

    if(flag == false)
    {
        std::cout << "Pushing on empty stack makes it not-empty: PASSED";
    }
    if(flag)
    {
        std::cout << "Pushing on empty stack makes it not-empty: FAILED";
    }
}

void test03()
{
    bool flag;
    char value = t;
    StackTest = new StackOfChar<char>();

    StackTest.push(value);
    StackTest.pop();
    flag = StackTest.isEmpty();

    if(flag)
    {
        std::cout << "Popping all elements so that isEmpty returns true: PASSED";
    }
    if(flag == false)
    {
        std::cout << "Popping all elements so that isEmpty returns true: FAILED";
    }
}

void test04()
{
    StackTest = new StackOfChar<char>();
    char value = t;

    StackTest.push(value);
    if(value == StackTest.peek())
    {
        std::cout << "Pushing character and then peeking works: PASSED";
    }
    if(value != StackTest.peek())
    {
        std::cout << "Pushing character and then peeking works: FAILED";
    }
    StackTest.pop();
}

