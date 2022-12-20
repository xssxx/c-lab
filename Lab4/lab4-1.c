#include <stdio.h>
#include <stdlib.h>

int main() {
    char num_str[6];
    int num;

    fgets(num_str, 6, stdin);
    num = atoi(num_str);

    printf("Binary number of %d is ", num);
    for(int i = 3; i >= 0; i--) {
        printf("%d", (num>>i) % 2);
    }
    puts(".");

    return 0;
}
