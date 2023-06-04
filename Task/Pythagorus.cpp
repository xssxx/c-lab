#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b;
    
    c = pow(a, 2) + pow(b, 2);

    cout << fixed << setprecision(6) << sqrt(c);
    // printf("%.6lf", c);

    return 0;
}