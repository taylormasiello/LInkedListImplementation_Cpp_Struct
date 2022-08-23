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

    temp = new Node();
    temp->data = 4;
    temp->link = NULL;

    //traversal of list
    Node* temp1 = A;
    while (temp1->link != NULL)
    {
        temp1 = temp1->link;
        //printf("" + temp->data); //to print each node
    }

    temp1->link = temp;
}

