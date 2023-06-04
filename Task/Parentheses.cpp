#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string text;

    cin >> text;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == '(')
            s.push(text[i]);
        else if (text[i] == ')') {
            if (!s.empty() && s.top() == '(')
                s.pop();
            else
                s.push(text[i]);
        }
    }

    cout << s.size();

    return 0;
}
