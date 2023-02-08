#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *create_list(int input[], int size) {
    struct Node *head, *tail, *tmp;
    head = tail = NULL;

    for (int i = 0; i < size; i++) {
        tmp = (struct Node *)malloc(sizeof(struct Node));
        tmp->val = input[i];
        tmp->next = NULL;
        if (head == NULL)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    return head;
}

void print_list(struct Node *head) {
    struct Node *tmp;
    for (tmp = head; tmp; tmp = tmp->next) {
        printf("%d ", tmp->val);
    }
    putchar('\n');
}

struct Node *merge_two_lists(struct Node *l1, struct Node *l2) {
    struct Node head, *tail = &head;
    head.next = NULL;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;

    return head.next;
}

int main() {
    struct Node *l1, *l2;

    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    l1 = create_list(arr1, 3);
    l2 = create_list(arr2, 3);

    // before merge
    print_list(l1);
    print_list(l2);

    merge_two_lists(l1, l2);

    // after merge
    print_list(l1);

    return 0;
}