#include <stdio.h>
#include <stdlib.h>

void up(int count, int arr[], int len) {
    // ถ้าสุดแล้วไม่เดินต่อ
    for(int j = 0; j < count; j++) {
        if(arr[0] == 2) return;
        for(int i = 0; i < len-1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[len-1] = 0;
    }
}

void down(int count, int arr[], int len) {
    // ถ้าสุดแล้วไม่เดินต่อ
    for(int j = 0; j < count; j++) {
        if(arr[len-1] == 1) return;
        for(int i = len-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = 0;
    }
}

void printArr(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int stairs, input, round = 1;
    printf("Input number of stairs: ");
    scanf("%d", &stairs);

    int arr[stairs+1];
    for(int i = 0; i < stairs; i++) {
        arr[i] = 0;
    }
    arr[stairs-1] = 1;
    arr[stairs-2] = 2;

    while(input != 0) {
        printf("---- round %d ----\n", round++);
        // print stairs
        for(int i = 0; i < stairs; i++) {
            switch(arr[i]) {
                case 0: puts("|---|"); break;
                case 1: puts("|-^-|"); break;
                case 2: puts("|-O-|"); break;
            }
        }
        // print step input
        printf("Input step command: ");
        scanf("%d", &input);
        if(input >= 0) {
            up(input ,arr, stairs);
        } else {
            down(abs(input) , arr, stairs);
        }
    }

    return 0;
}