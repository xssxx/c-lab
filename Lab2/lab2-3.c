#include <stdio.h>
#include <stdlib.h>

int main() {
    char level_str[4], year_str[4];
    int level, year;

    printf("school level of student: ");
    fgets(level_str, 4, stdin);

    printf("how many of learning: ");
    fgets(year_str, 4, stdin);

    level = atoi(level_str);
    year = atoi(year_str);

    if ((level < 4 && year > 3) || (level > 3 && year > 0)) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}