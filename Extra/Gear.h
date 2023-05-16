#include <iostream>
#include <sstream>
using namespace std;

class Gear {
private:
    string name;
    int offense;
    int defense;

public:
    Gear() : offense(0), defense(0) {}
    Gear(string name, int offense, int defense) {
        this->name = name;
        this->offense = offense;
        this->defense = defense;
    }

    int getOffense() {
        return offense;
    }

    int getDefense() {
        return defense;
    }

    string getName() {
        return name;
    }

    string toString() {
        stringstream ss;
        ss << "Offense: " << getOffense() << endl; 
        ss << "Defense: " << getDefense() << endl; 
        
        return ss.str();
    }

    string info() {
        stringstream ss;
        ss << "Gear name: " << getName() << " " << "offense: " << getOffense() << " " << "defense: " << getDefense() << endl;
    
        return ss.str();
    }
};