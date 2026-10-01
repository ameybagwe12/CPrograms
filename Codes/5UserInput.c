#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;
    printf("Enter your name: ");
    scanf("%49s", name); // Limit input to 49 characters to prevent buffer overflow

    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer value for age using pointers

    printf("Enter your GPA: ");
    scanf("%f", &gpa); // Read a double value (lf) for GPA using pointers

    printf("Hello %s! You are %d years old and your GPA is %.2f.\n", name, age, gpa);
    printf("Hello %s! You are %d years old.\n", name, age);

    return 0;
}
    