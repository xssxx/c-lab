#include <stdio.h>

int main() {
    double total = 0;
    int n, frac = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            total += 4.0 / frac;
        } else {
            total -= 4.0 / frac;
        }
        frac += 2;
    }
    printf("%.10lf", total);

    return 0;
}
