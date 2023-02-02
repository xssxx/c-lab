#include <stdio.h>

void roman2arabic(char input[], char output[]) {
    while (*input) {
        if (*input == 'I' && *(input+1) == 'I' && *(input+2) == 'I') {
            input += 3;
            *output = '3';
        } else if (*input == 'I' && *(input+1) == 'I') {
            input += 2;
            *output = '2';
        } else if (*input == 'I' && *(input+1) == 'X') {
            input += 2;
            *output = '9';
        } else if (*input == 'I') {
            input += 1;
            *output = '1';
        } else if (*input == 'I' && *(input+1) == 'V') {
            input += 2;
            *output = '4';
        } else if (*input == 'V' && *(input+1) == 'I' && *(input+2) == 'I' && *(input+3) == 'I') {
            input += 3;
            *output = '8';
        } else if (*input == 'V' && *(input+1) == 'I' && *(input+2) == 'I') {
            input += 2;
            *output = '7';
        } else if (*input == 'V' && *(input+1) == 'I') {
            input += 2;
            *output = '6';
        } else if (*input == 'V') {
            input += 1;
            *output = '5';
        } else {
            *output = *input;   
            input += 1;
        }
        output++;
    }
    *output = '\0';
}

int main() {    
    char input[80], output[80];

    printf(" input: ");
    gets(input);  /* read a linputne of characters from the input to "input" varinputable */

    roman2arabic(input, output);
    printf("output: %s\n", output);

    return 0;
} 