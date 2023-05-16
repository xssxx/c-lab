#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node; 

void insert_node(Node **head, int value) {
    Node *new, *curr, *prev;

    new = (Node *)malloc(sizeof(Node));
    new->value = value;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
    } else {
        curr = *head;
        if (value <= (*head)->value) {
            new->next = *head;
            *head = new;
        } else {
            while (curr && curr->value <= value) {
                prev = curr;
                curr = curr->next;
            }
            if (!curr) {
                prev->next = new;
            } else {
                new->next = curr;
                prev->next = new;
            }
        }
    }
}

void delete_node(Node **head, int value) {
    Node *curr = *head;
    Node *prev = NULL;

    while (curr != NULL) {
        if (curr->value == value) {
            if (prev == NULL) {
                *head = curr->next;
                free(curr);
                curr = *head;
            } else {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}


void print_list(Node *head) {
    Node *tmp = head;
    printf("[ ");
    if (tmp) {
        for (tmp; tmp != NULL; tmp = tmp->next) {
            printf("%d ", tmp->value);
        }
    }
    printf("]\n");
}

int main() {
    char key;
    int value;
    Node *head = NULL;

    while (key != 'q') {
        printf("input> ");
        scanf(" %c", &key);
        if (key == 'i') {
            scanf("%d", &value);
            insert_node(&head, value);
        } else if (key == 'd') {
            scanf("%d", &value);
            delete_node(&head, value);
        } else if (key == 'p') {
            print_list(head);
        }
        // fflush(stdin);
    }
}
