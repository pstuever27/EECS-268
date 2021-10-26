#ifndef CHECKER_H
#define CHECKER_H
#include <string>

class Checker
{
private:
    int counter, character;
public:
    Checker();
    bool isBalanced(std::string input);
};
#endif
