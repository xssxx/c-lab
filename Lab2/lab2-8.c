#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define FIXED_COST 5
#define BASE_COST 2

int main() {
    // input variables
    char size_str[3], pepperoni_str[3], cheese_str[3], mushroom_str[3];
    int size, pepperoni, cheese, mushroom;

    puts("Welcome to My Pizza Shop!!");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 3, stdin);    
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 3, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 3, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 3, stdin);
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    size = atoi(size_str);
    pepperoni = atoi(pepperoni_str);
    cheese = atoi(cheese_str);
    mushroom = atoi(mushroom_str);

    // set diameter
    short diameter;

    switch(size) {
        case 1: diameter = 10; break; // S
        case 2: diameter = 16; break; // M
        case 3: diameter = 20; break; // L
    }

    // set area
    float area = M_PI * pow(diameter, 2) / 4.0;

    float extracost = 0;
    // add extra cost
    if (pepperoni) extracost += 0.50;
    if (cheese) extracost += 0.25;
    if (mushroom) extracost += 0.30;

    // set cost
    float cost = FIXED_COST + (BASE_COST * area) + (extracost * area);
    // set price
    float price = 1.5 * cost;

    printf("Your order costs %.2f baht.\n", price);
    puts("Thank you.");

    return 0;
}