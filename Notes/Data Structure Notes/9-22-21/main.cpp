#include "Node.h"
#include <string>

int main()
{
    Node<bool>* boolNode = nullptr;
    Node<std::string>* strNode = nullptr;

    boolNode = new Node<bool>(false); //constructed a node with the specific type "Bool"
    strNode = new Node<std::string>(""); //This one has a string.

    //What you can't do:
    boolNode->setNext(strNode); //ERROR: Can't point a bool node to a string node
}