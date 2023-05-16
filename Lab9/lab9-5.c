#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} node;

void printList(node *pList) {
    node *tmp = pList;
    for (; tmp; tmp = tmp->next)
        printf("%d ", tmp->value);
    putchar('\n');
}

void insertNode(node **head, int value) {
    node *new_node, *prev, *tmp;
    int i;

    if (*head == NULL) {
        new_node = (node *)malloc(sizeof(node));
        new_node->value = value;
        new_node->next = NULL;
        *head = new_node; 
    }


}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printList(pList);
}