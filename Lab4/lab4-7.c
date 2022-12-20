#include <stdio.h>
#include <stdlib.h>

int main() {
    int h;
    scanf("%d", &h);
    
    for(int i = h*2-1; i >= 1; i--) {
        int w = h-abs(h-(h*2-i));
        for(int j = 0; j < w; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
