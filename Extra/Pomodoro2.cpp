#include <iostream>
#include <sstream>
using namespace std;

class Task {
public:
    string name;
    int count;
};

class Pomodoro {
private:
    Task tasks[31];
    int idx;
    int i;

    int getIndex(string task) {
        for (i = 0; i < idx; i++) {
            if (tasks[i].name == task)
                return i;
        }
        // if task doesn't exist return -1
        return -1;
    }

public:
    Pomodoro() : idx(0), i(0) {}

    Pomodoro(string task) {
        tasks[idx].name = task;
        tasks[idx].count = 1;
        idx = 1;
    }

    void addTask(string task) {
        int index = getIndex(task);
        // if exist add count
        if (index != -1) {
            tasks[index].count++;
            return;
        }
        // if not exist add new task
        tasks[idx].name = task;
        tasks[idx].count = 1;
        idx++;
    }

    int getTaskCount() {
        int totalTaskCount = 0;
        for (i = 0; i < idx; i++)
            totalTaskCount += tasks[i].count;

        return totalTaskCount;
    }

    string toString() {
        stringstream ss;
        ss << getTaskCount() << " Tasks" << endl;
        for (i = 0; i < idx; i++)
            ss << "[" << tasks[i].count << "]" << " " << tasks[i].name << endl;

        return ss.str();
    }
};

int main() {
    Pomodoro p;
    p.addTask("Coding");
    p.addTask("Coding");
    p.addTask("Linear");
    p.addTask("C++");
    p.addTask("Debugging");
    p.addTask("Debugging");
    p.addTask("Debugging");
    p.addTask("Debugging");
    p.addTask("Testing");
    p.addTask("Documentation");
    
    cout << p.toString() << endl;
}