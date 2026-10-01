#include<stdio.h>
#include<conio.h> // Include the conio.h header file for console input/output functions
int main()
{
    int arr[5]; // Declare an integer array of size 5
    char grades[5]; // Declare a character array of size 5 to store grades
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); // Read integers from user input and store them in the array
    }
    
    printf("Enter 5 grades:\n");
    for(int i = 0; i < 5; i++) {
        scanf(" %c", &grades[i]); // Read characters from user input and store them in the array
    }
    
    printf("You entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Print the integers stored in the array
    }
    
    printf("\nYou entered grades:\n");
    for(int i = 0; i < 5; i++) {
        printf("%c ", grades[i]); // Print the grades stored in the array
    }
    
    return 0;
}