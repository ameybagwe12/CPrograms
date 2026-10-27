#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, b[6];
    a = (int *)malloc(6 * sizeof(int));
    printf("Size of array 'a' is %d\n", sizeof(a) / sizeof(int));
    printf("Size of array 'b' is %d\n", sizeof(b) / sizeof(int));
}
