#include<stdio.h>
#include<stdlib.h>

int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    int *agePtr = &age;
    double *gpaPtr = &gpa;
    char *gradePtr = &grade;

    printf("Age: %d\n", *agePtr);
    printf("GPA: %f\n", *gpaPtr);
    printf("Grade: %c\n", *gradePtr);

    return 0;
}