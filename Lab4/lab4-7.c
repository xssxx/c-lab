#include <stdio.h>
#include <stdlib.h>

int main() {
    int h; // height
    scanf("%d", &h);
    
    for(int i = h*2-1; i >= 1; i--) {
        int w = h-abs(h-(h*2-i)); // width
        for(int j = 0; j < w; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
