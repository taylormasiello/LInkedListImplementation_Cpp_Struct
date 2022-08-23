#include <iostream>

struct Node
{
    int data;
    Node* link;
};

Node* A; //pointer to Node A
Node A = { 1, NULL }; //A points no where, list is empty; had to construct to remove red underline

//allocates mem (memory block), given sizeof(Node); dynamically allocated mem, allocated at runtime; can only work w/ this type of memory w/ pointers & ref's
//malloc() returns a void pointer that gives address of the assgined mem block; cast to "pointer to Node" from "void pointer"
Node* temp = (Node*)malloc(sizeof(Node)); 

int main()
{
    std::cout << "Hello World!\n";
}

