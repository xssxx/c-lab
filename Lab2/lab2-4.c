#include <stdio.h>
#include <stdlib.h>

int main() {
    char str_salary[24];
    float salary, tax;

    fgets(str_salary, 24, stdin);
    salary = atof(str_salary);

    if (salary < 0) {
        puts("Error: Salary must be greater or equal to 0");
        exit(1);
    } else if (salary <= 300000) {
        tax = salary * (5.0 / 100);
    } else if (salary > 300000) {
        //    first 300000 tax 5%   +  after 300000 tax 10%
        tax = 300000 * (5.0 / 100) + (salary - 300000) * (10.0 / 100);
    }
    printf("%.2f", tax);
    return 0;
}
