#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();

public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

Animal::Animal(int happiness, int energy, int fullness) {
    this->happiness = happiness ;
    this->energy = energy;
    this->fullness = fullness;
}

void Animal::limitStat() {
    if (happiness > 100) happiness = MAX_HAPPINESS;
    if (energy > 100) energy = MAX_ENERGY;
    if (fullness > 100) fullness = MAX_FULLNESS;
    if (happiness < 0) happiness = 0;
    if (energy < 0) energy = 0;
    if (fullness < 0) fullness = 0;
}

int Animal::getHappiness() {
    return happiness;
}

int Animal::getEnergy() {
    return energy;
}

int Animal::getFullness() {
    return fullness;
}

void Animal::eat(int food) {
    fullness += food;
    if (fullness > MAX_FULLNESS) {
        happiness -= 10;
    }
    limitStat();
}




int main()
{
}