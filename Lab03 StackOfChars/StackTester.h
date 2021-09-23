class StackTester
{
    public:

    StackTester();

    //This will call all your test methods
    void runTests();

    private:

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

    //more test methods as needed
};
