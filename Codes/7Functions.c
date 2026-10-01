#include <stdio.h>

int add(int a, int b);
void printMessage(void);
int square(int n);
int sumOfArray(int arr[], int size);
int factorial(int n);
void greet(char name[]);

int main() {
    int x = 5, y = 10, result;
    int numbers[] = {1, 2, 3, 4, 5};
    char name[] = "Amey";

    printMessage();
    greet(name);

    result = add(x, y);
    printf("Addition: %d\n", result);

    printf("Square of %d is %d\n", x, square(x));
    printf("Sum of array: %d\n", sumOfArray(numbers, 5));
    printf("Factorial of %d is %d\n", 5, factorial(5));

    return 0;
}

void printMessage(void) {
    printf("Welcome to C functions!\n");
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int add(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
