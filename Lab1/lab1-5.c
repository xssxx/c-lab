#include <stdio.h>

int main() {
    int amount = 1020;

    int a = (amount / 50) % 50;
    amount -= a * 50;
    int b = (amount / 20) % 20;
    amount -= b * 20;
    int c = (amount / 5) % 5;
    amount -= c * 5;
    int d = amount;

    printf("1: %d\n", d);
    printf("5: %d\n", c);
    printf("20: %d\n", b);
    printf("50: %d", a);

    return 0;
}