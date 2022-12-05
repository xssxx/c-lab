#include <stdio.h>
#include <stdlib.h>

int main() {
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);

    if (x == 0 && y == 0) {
        puts("Center");
        exit(1);
    // เหนือ
    } else if (y > 0 && x == 0) {
        puts("North");
        exit(1);
    // ใต้
    } else if (y < 0 && x == 0) {
        puts("South");
        exit(1);
    // ออก
    } else if (x > 0 && y == 0) {
        puts("East");
        exit(1);
    // ตก
    } else if (x < 0 && y == 0) {
        puts("West");
        exit(1);
    } else if (x > 0 && y > 0) {
        puts("North-east");
        exit(1);
    } else if (x > 0 && y < 0) {
        puts("South-east");
        exit(1);
    } else if (x < 0 && y > 0) {
        puts("North-west");
        exit(1);
    } else if (x < 0 && y < 0); {
        puts("South-west");
        exit(1);
    }

    return 0;
}