#include <stdio.h>

long toBin(int x) {
    if (x == 0) {
        return 0;
    } else {
        return ((x % 2)+10 * toBin(x / 2));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", toBin(n));

    return 0;
}
