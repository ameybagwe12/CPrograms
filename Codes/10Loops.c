#include <stdio.h>

int main() {
    int i, j;

    printf("For loop example:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("While loop example:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i * 2);
        i++;
    }
    printf("\n\n");

    printf("Do-while loop example:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n\n");

    printf("Nested for loop example:\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
