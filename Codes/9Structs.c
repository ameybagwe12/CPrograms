#include<stdio.h>
#include<string.h> // Include the string.h header file for string manipulation functions

typedef struct {
    char name[50];
    int age;
    char grade;
} Student;

int main() {
    Student s1[2]; // Declare an array of 2 Student structures
    for (int i=0; i< 2; i++) {
        printf("\n-----------------------------");
        printf("Enter name for student: ");
        scanf("%49s", s1[i].name); // Read name into the structure
        printf("Enter age for student: ");
        scanf("%d", &s1[i].age); // Read age into the structure
        printf("Enter grade for student: ");
        scanf(" %c", &s1[i].grade); // Read grade into the structure
    }

    for (int i=0; i< 2; i++) {
        printf("\nDetails of student %d:\n", i+1);
        printf("Name: %s\n", s1[i].name);
        printf("Age: %d\n", s1[i].age);
        printf("Grade: %c\n", s1[i].grade);
    }

    Student s2 = {"Amey", 21, 'A'}; // Declare and initialize a Student structure
    Student s3;
    strcpy(s3.name, "John"); // Copy name into the structure
    
    return 0;
}