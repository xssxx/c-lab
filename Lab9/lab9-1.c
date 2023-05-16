#include <stdio.h>
#include <string.h>

enum DaysOfWeek {SUN = 3, MON = 4, TUE = 5, WED = 6, THU = 7, FRI = 8, SAT = 9};


int main() {  
    char day_names[][10] = {"", "", "",
                            "Sunday", "Monday", "Tuesday",
                            "Wednesday", "Thursday", "Friday",
                            "Saturday"};
    enum DaysOfWeek today;

    today = MON;
    printf("The day after %s is %s\n", day_names[today], day_names[today+1]);
    printf("Two days after %s is %s\n", day_names[today], day_names[today+2]);
}