#include <stdio.h>
#include <stdlib.h>

int main() {
    char m_str[6], n_str[6];
    int m, n, gcd;

    fgets(m_str, 6, stdin);
    fgets(n_str, 6, stdin);

    m = atoi(m_str);
    n = atoi(n_str);

    gcd = (m < n) ? m : n;

    while (gcd > 1) {
        if (m % gcd == 0 && n % gcd == 0) {
            break;
        }
        gcd--;
    }

    if (n / gcd == 1) {
        printf("= %d", m / gcd);
    } else {
        printf("= %d/%d", m / gcd, n / gcd);
    }


    return 0;
}