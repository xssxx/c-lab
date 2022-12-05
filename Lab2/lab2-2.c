#include <stdlib.h>
#include <stdio.h>

int main() {
    char str_stickers[4], str_price[8];
    int stickers, discount;
    float price, amount;

    fgets(str_stickers, 4, stdin);
    fgets(str_price, 8, stdin);
    
    stickers = atoi(str_stickers);
    price = atof(str_price);
    
    if (stickers == 0) {
        discount = 0;
    } else if (stickers == 1) {
        discount = 10;
        stickers--;
    } else if (stickers == 2) {
        discount = 15;
        stickers -= 2;
    } else if (stickers < 6) {
        discount = 20;
        stickers -= 3;
    } else if (stickers < 9) {
        discount = 30;
        stickers -= 6;
    } else {
        discount = 40;
        stickers -= 9;
    }
    
    amount = price - (price * (discount / 100.0));
    
    printf("You get %d percents discount.\n", discount);
    printf("Total amount due is %.2f Baht.\n", amount);
    printf("And you have %d stickers left.\n", stickers);

    return 0;
}
