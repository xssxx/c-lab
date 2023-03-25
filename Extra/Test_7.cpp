#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Gear {
private:
    int offense;
    int defense;
    string name;

public:
    Gear(int offense, int defense, string name) {
        this->offense = offense;
        this->defense = defense;
        this->name = name;
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
};

class Player {
private:
    int offense;
    int defense;
    string name;
    Gear gears[6];
    int numGears;

public:
    Player(int offense, int defense, string name) {
        this->offense = offense;
        this->defense = defense;
        this->name = name;
        numGears = 0;
    }

    void addGear(Gear gear) {
        if (numGears < 6) {
            gears[numGears] = gear;
            numGears++;
        } else {
            // Find the gear with the lowest offense and replace it with the new gear
            int minOffense = gears[0].getOffense();
            int minIndex = 0;
            for (int i = 1; i < numGears; i++) {
                if (gears[i].getOffense() < minOffense) {
                    minOffense = gears[i].getOffense();
                    minIndex = i;
                }
            }
            if (gear.getOffense() > minOffense) {
                gears[minIndex] = gear;
            }
        }
    }

    int getOffense() {
        int totalOffense = offense;
        for (int i = 0; i < numGears; i++) {
            totalOffense += gears[i].getOffense();
        }
        return totalOffense;
    }

    int getDefense() {
        int totalDefense = defense;
        for (int i = 0; i < numGears; i++) {
            totalDefense += gears[i].getDefense();
        }
        return totalDefense;
    }

    string getName() {
        return name;
    }

    string toString() {
        stringstream ss;
        ss << "Name: " << name << endl;
        ss << "Offense: " << getOffense() << endl;
        ss << "Defense: " << getDefense() << endl;
        ss << "Gears: " << endl;
        for (int i = 0; i < numGears; i++) {
            ss << "- " << gears[i].getName() << endl;
        }
        return ss.str();
    }
};

int main() {
    Gear g1(10, 5, "Legendary Sword");
    Gear g2(5, 10, "Mighty Shield");
    Gear g3(15, 10, "Dragon Helm");
    Gear g4(20, 5, "Giant Axe");
    Gear g5(5, 20, "Steel Armor");
    Gear g6(10, 10, "Silver Ring");
    Gear g7(25, 15, "Crystal Staff");
    Player p(20, 10, "Hero");
    p.addGear(g1);
    p.addGear(g2);
    p.addGear(g3);
    p.addGear(g4);
    p.addGear(g5);
    p.addGear(g6);
    p.addGear(g7);
}
