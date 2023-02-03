#include <stdio.h>

struct student {
    int id;
    int mid;
    int final;
};

char calculateGrade(struct student students) {
    int score = students.mid + students.final;
    char grade;
    if (score >= 80) 
        grade = 'A';
    else if (score >= 70) 
        grade = 'B';
    else if (score >= 60) 
        grade = 'C';
    else if (score >= 50) 
        grade = 'D';
    else 
        grade = 'F';
    return grade;
}

int main() {
    struct student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].mid);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    for (i = 0; i < 5; i++) {
        printf("Student ID %d receives grade %c.\n", students[i].id, calculateGrade(students[i]));
    }

    return 0;
}