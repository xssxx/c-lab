#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n != 0) {
        if (n % 2 == 0) {
            n /= 2;
            count++;
        } else {
            n--;
            count++;
        }
    }

    cout << count;
}