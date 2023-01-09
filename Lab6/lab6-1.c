#include <stdio.h>

int main() {
    int hour, minute;
    char ampm;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %s", &hour, &minute, ampm);

    if (ampm == 'P' || ampm == 'p') {
        if (hour < 12) hour += 12;
        printf("Equivalent 24-hour time: %02d:%02d", hour, minute);
    } else {
        printf("Equivalent 24-hour time: %02d:%02d", hour%12, minute);
    }
    
    return 0;
}