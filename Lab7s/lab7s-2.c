#include <stdio.h>

int remove_vowel(char *str) {
    int i, j, len = 0;
    for (i = 0; str[i] != '\0'; i++, len++);
    
    for (i = 0; i < len; i++) {
        switch(tolower(str[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                for (j = i; j < len; j++) {
                    str[j] = str[j+1];
                }
                i--, len--;
        }
        str[len+1] = '\0';
    }
}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}