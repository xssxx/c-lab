#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Pomodoro {
private:
    vector<string> tasks;
    int pomodoro;

public:
    Pomodoro(string task) {
        tasks.push_back(task);
        pomodoro = 0;
    }

    void addTask(string task) {
        tasks.push_back(task);
    }

    string getTask() {
        return tasks.back();
    }

    void start() {
        pomodoro++;
    }

    void toString() {
        
    }
};

int main() {
    Pomodoro p("Reading");
    p.addTask("Coding");
    p.addTask("Linear");
    
    cout << p.getTask() << endl;
}