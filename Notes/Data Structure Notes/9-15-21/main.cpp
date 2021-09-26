//Boardwork 9-15-21
#include <iostream>
#include <math.h>
#include "node.h"

int main()
{
    Node* first = nullptr;
    Node* temp = nullptr;
    //continue this main without declaring any more pointers

    first = Node(55);
    temp = Node(32);
    Node -> setNext(temp);
    temp = Node(27);
    temp->setNext(nullptr);
    Node->getNext->setNext(temp);

    return(0);
}