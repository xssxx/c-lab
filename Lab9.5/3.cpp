#include <iostream>
#include <cstdlib>
using namespace std;

int find(int num, int arr[], int size) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            found = 1;
            break;
        }
    }
    return found;
}

int main() {
    int count, i;

    cin >> count;

    int *odd = (int *)malloc(count * sizeof(int)); // allocate memory using malloc instead of calloc
    int *even = (int *)malloc(count * sizeof(int)); // allocate memory using malloc instead of calloc
    int prisoners[count];

    // input array
    for (i = 0; i < count; i++) {
        cin >> prisoners[i];
    }

    // process
    int odd_count = 0, even_count = 0;
    for (i = 1; i <= 100; i++) {
        // if not found prisoner
        if (!find(i, prisoners, count)) {
            if (i % 2 == 0) {
                even[even_count] = i; // store i in even array
                even_count++; // increment even count
            } else {
                odd[odd_count] = i; // store i in odd array
                odd_count++; // increment odd count
            }
        }
    }

    // print odd
    for (i = 0; i < 5 && i < odd_count; i++) {
        cout << odd[i] << ' ';
    }
    cout << endl;

    // print even
    for (i = 0; i < even_count; i++) {
        cout << even[i] << ' ';
    }
    cout << endl;

    // free memory
    free(odd);
    free(even);

    return 0;
}
