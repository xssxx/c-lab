#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}

int main() {
    int count;
    printf("Enter count of number: ");
    scanf("%d", &count);
    
    int arr[count];

    puts("Example input : 5 4 3 2 1 0");
    printf("Enter number to sort: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    // printArr(arr, count);
    bubble_sort(arr, count);
    printArr(arr, count);

    return 0; 
}