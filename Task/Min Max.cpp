#include <iostream>
using namespace std;

int main() {
    int min = 2000000001;
    int max = -2000000001;
    int count;

    cin >> count;

    int temp;
    for (int i = 0; i < count; i++) {
        cin >> temp;
        if (temp < min)
            min = temp;
        else if (temp > max)
            max = temp;
    }

    cout << min << endl << max;

    return 0;
}