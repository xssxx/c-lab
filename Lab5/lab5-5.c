#include <stdio.h>
#include <stdlib.h>

void print(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("-");
        } else {
            printf("x");
        }
    }
    printf("\n");
}

int main() {
    int h;
    printf("Enter n: ");
    scanf("%d", &h);
    
    for(int i = h*2-1; i >= 1; i--) {
        int w = h-abs(h-(h*2-i));
        print(w);
    }
    
    return 0;
}
