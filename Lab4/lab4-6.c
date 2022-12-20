#include <stdio.h>

int main()
{
    float target, collected, temp = 0;
    int day = 1;
    
    printf("Enter your goal amount: ");
    scanf("%f", &target);
    
    while(target > 0) {
        printf("Enter money collected today: ");
        scanf("%f", &collected);
        temp += collected;
        target -= collected;
        if (target > 0) {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day++, temp, target);
        }
    }
    if (day > 1) {
        printf("Congratulations! You take %d days to reach your goal.", day);
    } else {
        printf("Congratulations! You take %d day to reach your goal.", day);
    }
    return 0;
}
