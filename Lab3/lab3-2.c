#include <stdio.h>
#include <stdlib.h>

int main() {
    char m_str[16], n_str[16];
    long long m, n;
    long long gcd, lcm;

    fgets(m_str, 16, stdin);
    fgets(n_str, 16, stdin);

    m = atoll(m_str);
    n = atoll(n_str);

    long long temp_m = m;
    long long temp_n = n;

    // GCD
    while(m != n) {
        if(m > n) {
            m -= n;
        } else {
            n -= m;
        }
    }
    printf("GCD: %lld\n", m);
    // LCM = (m * n) / GCD
    printf("LCM: %lld\n", (temp_m * temp_n) / m);
    
    return 0;
}