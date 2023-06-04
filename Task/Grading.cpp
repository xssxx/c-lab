#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    string grade;
    
    cin >> a >> b >> c;

    int score = a + b + c;

    if (score >= 80)
        grade = "A";
    else if (score >= 75)
        grade = "B+";
    else if (score >= 70)
        grade = "B";
    else if (score >= 65)
        grade = "C+";
    else if (score >= 60)
        grade = "C";
    else if (score >= 55)
        grade = "D+";
    else if (score >= 50)
        grade = "D";
    else
        grade = "F";

    cout << grade;

    return 0;
}