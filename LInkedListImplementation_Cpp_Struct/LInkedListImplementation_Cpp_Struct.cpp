#include <iostream>

struct Node
{
    int data;
    Node* link;
};



int main()
{
    Node* A; //pointer to Node A
    A = NULL; //A points no where, list is empty

    Node* temp = new Node(); //new syntax of C++ preferred to grab mem blocks
    temp->data = 2;
    temp->link = NULL;

    A = temp;
}

