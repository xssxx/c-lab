#include <stdio.h>
#include <ctype.h>

float gpa(int credit[], char grade[], int count) {
    float total = 0;
    int sum = 0;
    for(int i = 0; i < count; i++) {
        int num_grade;
        switch(toupper(grade[i])) {
            case 'A': num_grade = 4; break;
            case 'B': num_grade = 3; break;
            case 'C': num_grade = 2; break;
            case 'D': num_grade = 1; break;
            case 'F': num_grade = 0; break;
        }
        sum += credit[i];
        total += credit[i] * num_grade;
    }
    return total / sum;
}

int main() {
    int count;
    printf("Enter number of subject(s): ");
    scanf("%d", &count);
    int credit[count];
    char grade[count];

    for(int i = 0; i < count; i++) {
        printf("Enter credit,grade for subject #%d: ", i+1);
        scanf("%d,%c", &credit[i], &grade[i]);
    }

    printf("GPA = %.2f", gpa(credit, grade, count));

    return 0;
}