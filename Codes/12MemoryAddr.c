#include<stdio.h>

int main () {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\n", &age); // Print the memory address of the integer variable 'age'
    printf("GPA: %p\n", &gpa); // Print the memory address of the double variable 'gpa'
    printf("Grade: %p\n", &grade); // Print the memory address of the character variable 'grade'
}