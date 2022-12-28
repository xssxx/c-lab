#include <stdio.h>

int main() {
    int i, a[5], b[5], c[10];
    
    puts("Enter array a:");
    for(i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        scanf ("%d", &a[i]);
    }

    puts("Enter array b:");
    for(i = 0; i < 5; i++) {
        printf("Please enter an integer: ");
        scanf ("%d", &b[i]);
    }

    for(i = 0; i < 10; i++) {
        c[i] = (i < 5) ? a[i] : b[i-5];
    }

    printf("Array c: ");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i])
        
    printf("\n");
    return 0;
}
