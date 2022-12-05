#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    int ascii = ch;

    // a-z
    if (ascii >= 97 && ascii <= 122) {
        puts("Output: lower case");
    // A-Z
    } else if (ascii >= 65 && ascii <= 90) {
        puts("Output: upper case");
    // 0-9
    } else if (ascii >= 48 && ascii <= 57) {
        puts("Output: digit");
    // others
    } else {
        puts("Output: others");
    }

    return 0;   
}