#include <iostream>
using namespace std;

int main() {
    bool isCapital = false, isSmall = false;
    string text;

    cin >> text;

    for (short i = 0; i < text.length() + 1; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z')
            isCapital = true;
        else if (text[i] >= 'a' && text[i] <= 'z')
            isSmall = true;
    }

    if (isCapital && !isSmall) {
        cout << "All Capital Letter";
    } else if (isSmall && !isCapital) {
        cout << "All Small Letter";
    } else if (isCapital && isSmall) { 
        cout << "Mix";
    }

    return 0;
}