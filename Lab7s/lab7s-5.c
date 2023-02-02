#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char *str) {
    char *res = (char *)malloc(sizeof(char) * 24);
    char *temp = res;
    while (*temp++ = toupper(*str++));
    *temp = '\0';

    return res; 
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
    if (result == s) printf("ERROR.\n");
    
	printf("%s\n",result);
}