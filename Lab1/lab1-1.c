#include <stdio.h>
int main() {
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    
    int days = computer_time / 1440;
    int hours = (computer_time / 60) % 24;
    int minutes = computer_time % 60;
    printf("It is %d days %d hours and %d minutes.", days, hours, minutes);

    return 0;
}