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

struct Node *add_two_lists(struct Node *l1, struct Node *l2) {
    struct Node *tmp, *head, *tail;

    int carry = 0, sum;
    while (l1 || l2 || carry) {
        tmp = (struct Node *)malloc(sizeof(struct Node));
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        sum %= 10;
        tmp->val = sum;
        tmp->next = NULL;
        if (head == NULL)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
        l1 = l1 ? l1->next : 0;
        l2 = l2 ? l2->next : 0;
    }
    return head;
}

void free_list(struct Node *head) {
    struct Node *tmp;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    struct Node *l1, *l2, *l3;  

    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 4, 6};

    l1 = create_list(arr1, 3);
    l2 = create_list(arr2, 3);

    printf("     l1: ");
    print_list(l1);
    printf("     l2: ");
    print_list(l2);


    l3 = add_two_lists(l1, l2);
    printf("l1 + l2: ");
    print_list(l3);

    printf("after merge linked list (l1 merge l2): ");
    merge_two_lists(l1, l2);
    print_list(l1);

    // free_list(l1);
    // free_list(l2);
    // free_list(l3);

    return 0;
}