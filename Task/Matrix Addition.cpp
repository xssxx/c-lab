#include <iostream>
using namespace std; 

int main() {
    int m, n; 
    int i;

    cin >> m >> n;

    int len = m * n;

    int matrix[len + 1];

    for (i = 0; i < len; i++) {
        cin >> matrix[i];
    }

    for (i = 0; i < len; i++) {
        int temp;
        cin >> temp;
        matrix[i] += temp;
    }

    for (i = 0; i < len; i++) {
        if (i > 0 && i % n == 0) {
            cout << endl;
        }
        cout << matrix[i] << ' ';
    }

    return 0;
}