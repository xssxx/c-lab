#include <stdio.h>

int main() {
    float init_val, input_val;
    char operator;

    printf("Initial Value: ");
    scanf("%f", &init_val);
    printf("\n");

    while(1) {
        // get input operator
        printf("Operator: ");
        scanf("\n%c", &operator);
        // check stop case
        if(operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("\n");
            break;
        }
        // get input value
        printf("Input Value: ");
        scanf("\n%f", &input_val);
        // calculating
        switch(operator) {
            case '+': init_val += input_val; break;
            case '-': init_val -= input_val; break;
            case '*': init_val *= input_val; break;
            case '/': init_val /= input_val; break;
        }
        // print present value
        printf("Present Value is %.4f\n\n", init_val);
    }

    printf("Finish Calculation. Final Value is %.4f", init_val);

    return 0;
}
