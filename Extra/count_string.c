#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[201];
    int upper = 0, lower = 0, length = 0, digit = 0, other = 0;
    
    fgets(str, 201, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        // doesn't count white space
        if (str[i] == ' ') {
            continue;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            other++;
        }
        length++;
    }

    printf("Length: %d\n", length - 1);
    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    printf("Digit: %d\n", digit);
    printf("other: %d\n", other - 1);

    return 0;
}