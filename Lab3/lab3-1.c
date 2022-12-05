#include <stdio.h>
#include <stdlib.h>

// No scanf

int main() {
    char str_num[8];
    int num;
    fgets(str_num, 8, stdin);
    num = atoi(str_num);

    for (int i = num; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}