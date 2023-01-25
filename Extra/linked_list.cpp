/* Linked List in C++ */
#include <iostream>

class Node {
public:
    int data;
    Node *next;
};

int main() {
    // Create nodes
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    // allocate nodes in heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign data
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Print linked list
    head = one;
    while (head != NULL) {
        std::cout << head->data << ' ';
        head = head->next;
    }

    return 0;
}