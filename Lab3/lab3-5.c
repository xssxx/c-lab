#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 0 || num > 26) {
        puts("-");
        exit(1);
    }

    short ascii = 'a';
    // length = input + (input - 1)
    short len = -1 + num * 2;

    for (int i = 0; i < len; i++) {
        if (i == len-1) {
            printf("%c", (char)ascii + abs(i-num+1));
        } else {
            printf("%c-", (char)ascii + abs(i-num+1));
        }
    }

    return 0;
}