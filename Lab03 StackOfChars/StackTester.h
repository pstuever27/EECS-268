#include <iostream>
#include "Node.h"
#include "StackOfChar.h"


class StackTester
{
    public:

    StackTester();

    ~StackTester();

    //This will call all your test methods
    void runTests();

    private:

    StackOfChar<char> StackTest();

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
    
};
