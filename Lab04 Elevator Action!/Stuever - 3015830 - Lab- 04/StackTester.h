/** -----------------------------------------------------------------------------
 *
 * @file: StackTester.h
 * @author Paul Stuever
 * Assignment: EECS-268 Lab 4
 * @brief: Header file for StackTester.cpp
 * @date:  09/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKTESTER_H
#define STACKTESTER_H

#include <iostream>
#include "Node.h"
#include "StackOfChar.h"


class StackTester
{
    public:

    /**
  * @pre Needs the user to select -t
  * @post Will make StackTest equal nullptr
  * @param none
  * @throw none
  **/
    StackTester();
    /**
     * @pre The function must be done
     * @post Will delete StackTest
     * @param none
     * @throw none
     **/
    ~StackTester();

    //This will call all your test methods
    void runTests();

    private:

    StackOfChar* StackTest;

    /**
    * @brief Creates an empty stack and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
    **/
    void test03();

    /**
     * @brief Makes empty stack, pushes a character, peeks to ensure that char is there.
     **/
    void test04();

    /**
     * @brief Makes a stack, verifies it's empty, attempts to pop, and should return a runtime error.
     **/
    void test05();

    /**
     * @brief Makes a stack, verifies it's empty, peeks, and verifies there is a runtime error.
     **/
    void test06();

};
#endif
