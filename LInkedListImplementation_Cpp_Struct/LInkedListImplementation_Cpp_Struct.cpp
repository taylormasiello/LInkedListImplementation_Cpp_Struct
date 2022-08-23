#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

//insert at beginning
void push(struct Node** head, int node_data)
{
    //create and allocate node
    struct Node* newNode = new Node;

    newNode->data = node_data;
    newNode->next = (*head); //set next of new node as head

    (*head) = newNode; // move head to point to the newNode
}

//insert new node after a given node
void insertAfter(struct Node* prev_node, int node_data)
{
    //check if given prev_node NULL
    if (prev_node == NULL)
    {
        cout << "given previous node cannot be NULL"; 
        return;
    }

    //create, allocate new node
    struct Node* newNode = new Node;

    newNode->data = node_data;
    newNode->next = prev_node->next; //make next of newNode as next of prev_node

    prev_node->next = newNode; //move next of prev_node as new_node
}

//insert at end
void append(struct Node** head, int node_data)
{

    struct Node* newNode = new Node;

    struct Node* last = *head; /* used in step 5*/

    newNode->data = node_data;
    newNode->next = NULL; //set next pointer of newNode to null as is last node

    //if list empty, newNode becomes head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    //traverse till the last node
    while (last->next != NULL)
        last = last->next;

    //change next of last node
    last->next = newNode;
    return;
}

// display linkedList
void displayList(struct Node* node)
{
    //traverse list, display each node
    while (node != NULL)
    {
        cout << node->data << "-->";
        node = node->next;
    }

    if (node == NULL)
        cout << "null";
}

int main()
{
    //empty list
    struct Node* head = NULL;

    //insert 10
    append(&head, 10);

    //insert 20 at beginning
    push(&head, 20);

    //insert 30 at beginning
    push(&head, 30);

    //insert 40 at end
    append(&head, 40); // 

    //insert 50, after 20
    insertAfter(head->next, 50);

    cout << "Final linked list: " << endl;
    displayList(head);

    return 0;
}