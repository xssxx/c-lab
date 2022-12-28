#include <stdio.h>

int len(int n) {
    int count = 0;
    while(n != 0) {
        n /= 10;
        count += 1;
    } 
    return count;
}

int main() {
    long long n, npow, temp_n;
    int flag = 0;

    printf("Input n = ");
    scanf("%lld", &n);

    temp_n = n;
    npow = n * n;
    
    printf("n^2 = %lld\n", npow);
    
    for(int i = 0; i < len(temp_n); i++) {
        if(n % 10 == npow % 10) {
            flag += 1;
        }
        n /= 10;
        npow /= 10;
    }
    
    if(flag == len(temp_n)) {
        printf("Yes. %lld is automorphic number.", temp_n);
    } else {
        printf("No. %lld is not automorphic number.", temp_n);
    }
 
    return 0;
}
