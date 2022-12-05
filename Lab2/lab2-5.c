#include <stdio.h>
#include <stdlib.h>

int main() {
    char str_a[3], str_b[3], str_c[3];
    int a, b, c;

    printf("Enter length of side A: ");
    fgets(str_a, 3, stdin);
    printf("Enter length of side B: ");
    fgets(str_b, 3, stdin);
    printf("Enter length of side C: ");
    fgets(str_c, 3, stdin);

    a = atoi(str_a);
    b = atoi(str_b);
    c = atoi(str_c);

    if ((a == 0 || b == 0 || c == 0) || (a + b <= c || b + c <= a || a + c <= b)) {
        puts("Triangle type is invalid.");
    } else if (a == b && a == c && b == c) {
        puts("Triangle type is equilateral.");
    } else if (a != b && a != c && b != c) {
        puts("Triangle type is scalene.");
    } else {
        puts("Triangle type is isosceles.");
    }

    return 0;
}