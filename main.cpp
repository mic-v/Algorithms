#include <iostream>

#include "cpp/SinglyLinkedList/LinkedList.h"

int main() 
{
    std::cout << "Hello World\n";
    LinkedList list;
    list.push(12);
    list.push(13);
    list.print();
    list.pop();
    list.print();
    list.pop();
    list.print();
    return 0;
}