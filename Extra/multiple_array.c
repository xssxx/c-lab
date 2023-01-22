#include <stdio.h>
#include <stdlib.h>

// create array from 0 to n and each element multiple by k
int *multiple_array(int k, int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = k * i;
    }
    return arr;
}

int main() {
    int *arr = multiple_array(16, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
    free(arr);

    return 0;
}