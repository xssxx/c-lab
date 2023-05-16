#include <iostream>
#include <sstream>
#include "Gear.h"
using namespace std;

class Player : public Gear {
private:
    Gear gear[6];
    string name;
    int offense;
    int defense;
    int idx;
    int i;

    int lowOffense() {
        int low = gear[0].getOffense();
        for (i = 0; i < idx; i++) {
            if (gear[i].getOffense() < low)
                low = i;
        }
        return low; // lowest gear offense index
    }

public:
    Player(string name, int offense, int defense) {
        this->name = name;
        this->offense = offense;
        this->defense = defense;
        idx = 0;
    }

    void addGear(Gear gear) {
        // if gear is full
        // check lowest offense gear and add replace new gear
        if (idx > 5) { 
            this->gear[lowOffense()] = gear;
            return;
        }
        // if gear is not full add new gear
        this->gear[idx] = gear;
        offense += gear.getOffense();
        defense += gear.getDefense();
        idx++;
    }

    string getName() {
        return name;
    }

    int getOffense() {
        return offense;
    }

    int getDefense() {
        return defense;
    }

    string toString() {
        stringstream ss;
        ss << "name: " << getName() << endl;
        ss << "offense: " << getOffense() << endl;
        ss << "defense: " << getDefense() << endl;

        for (i = 0; i < idx; i++)
            ss << gear[i].info();
        
        return ss.str();
    }
};

int main() {
    Gear helmet("helmet", 0, 80);
    Gear armour("armour", 0, 100);
    Gear sword("sword", 100, 0);
    Gear boots("boots", 0, 50);
    Gear legs("legs", 0, 50);
    Gear gun("gun", 200, 0);

    Gear stick("stick", 60, 0);

    Player p("X", 100, 100);
    p.addGear(helmet);
    p.addGear(armour);
    p.addGear(sword);
    p.addGear(boots);
    p.addGear(legs);
    p.addGear(gun);

    p.addGear(stick);

    cout << p.toString() << endl;
}