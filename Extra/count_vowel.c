#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch) {
    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            return 1;
    }
    return 0;
}

// count vowel in string by recursive function
int count_vowel(char *str) {
    if (*str == '\0') return 0; // base case null character
    if (is_vowel(*str)) {
        str++;
        return 1 + count_vowel(str);
    }
    str++;
    return 0 + count_vowel(str);
}

int main() {
    char vowel[10] = "axeiouxzi";

    printf("%d\n", count_vowel(vowel));
    
    return 0;
}
