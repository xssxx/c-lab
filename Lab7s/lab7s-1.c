#include <stdio.h>

int main() {
    char str[24];
    int vowel = 0;

    printf("String (without a space): ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        switch(tolower(str[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c ", str[i]);
                vowel++;
                break;
        }
    }
    puts("");
    if (vowel > 1) {
        printf("This string contains %d vowels.", vowel);
    } else {
        printf("This string contains %d vowel.", vowel);
    }

    return 0;
}