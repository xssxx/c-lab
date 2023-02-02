#include <stdio.h>
// Check if a char is different in position
int strcheck(char *s1, char *s2) {
    int diff = 0;
    while (*s1 && *s2) {
        if (*s1++ != *s2++) diff++;
    }
    return diff;
}

int main() {
    int i, len, count;
    int isdiff = 0;

    scanf("%d %d", &len, &count);

    char chain[count+1][len+1];
    for (i = 0; i < count; i++) {
        scanf("%s", chain[i]);
    }

    for (i = 0; i < count; i++) {
        int diff = (i == 0) ? strcheck(chain[i], chain[0]) : strcheck(chain[i], chain[i-1]);
        // If there's a string that has different char, more than 2, then print the previous string.
        if (diff > 2) {
            printf("%s", chain[i-1]);
            isdiff = 1; // there's different char
            return 1;
        } 
    }
    if (!isdiff) {
        printf("%s", chain[count-1]);
    }   
    return 0;
}