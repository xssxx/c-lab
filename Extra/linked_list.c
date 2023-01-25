/* Linked List in C */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    // Create nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate nodes in memory
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    // Assign data
    one->data = 4;
    two->data = 5;
    three->data = 6;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    

    return 0;
}