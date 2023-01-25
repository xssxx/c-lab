#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int sum = 0;
    int num = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    printf("Sum of integers in the string: %d\n", sum);
    return 0;
}