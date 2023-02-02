#include <stdio.h>

int charcount(char *s) {
    int count;
    for (count = 0; *s++; count++);
    return count;
}

void charweave(char *s, char *result) {
    int i, n = charcount(s);
    // left
    for (i = 0; i < n; i++, result++) {
        *result = (i % 2 == 0) ? s[i/2] : s[n-1-(i/2)];
    } // right
    for (i = i - 1; i >= 0; i--, result++) {
        *result = (i % 2 == 0) ? s[i/2] : s[n-1-(i/2)];
    }
    *result = 0;
}

int main() {  
    char str[100],result[200];

    printf("String: ");
    gets(str);   /* read a line of characters from the input to "str" variable */
    charweave(str,result);
    printf("Output: %s\n",result);
    
    return 0;
}
