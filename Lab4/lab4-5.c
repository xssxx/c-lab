#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reflection(int len, int size) {
    int ascii = 97 + size - 1; // a

    // left space
    for(int j = 0; j < (size*2) - (len*2); j++) {
        printf("-");
    }

    // alphabet
    for(int i = 0; i < len*2-1; i++) {
        if (i == (len*2-1)-1) {
            printf("%c", (char)ascii-(len-1) + abs(i-len+1));
        } else {
            printf("%c-", (char)ascii-(len-1) + abs(i-len+1));
        }
    }

    // right space
    for(int j = 0; j < (size*2) - (len*2); j++) {
        printf("-");
    }

    printf("\n");
}

int main() {
    int size, height;
    scanf("%d", &size); 
    
    height = size * 2 - 1;

    if(size <= 0 || size > 26) {
        puts("-");
        exit(1);
    }

    // first loop print height
    for(int i = size-1; i >= 1-size; i--) {
        // second loop print alphabe
        reflection(size-abs(i), size);
    }

    return 0;
}
