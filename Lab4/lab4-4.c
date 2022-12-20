#include <stdio.h>

int main() {
    int w, h;
    scanf("%d", &w);
    scanf("%d", &h);
    
    // top line
    for(int i = 0; i < w; i++) {
        printf("*");
    }
    printf("\n");
    
    // middle line
    for(int i = 0; i < h-2; i++) {
        for(int j = 0; j < w+h-2; j++) {
            if(j == i+1 || j == w+i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // bottom line
    for(int i = 0; i < w+h-1; i++) {
        if(i >= h-1) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    
    return 0;
}
