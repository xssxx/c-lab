#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[205];
    int open = 0, close = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '(')
            open++;
        else if (str[i] == ')')
            close++;
    }

    printf("%d", abs(open - close));

    return 0;
}