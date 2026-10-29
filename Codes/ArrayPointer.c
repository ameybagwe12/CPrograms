#include <stdio.h>
#include <stdlib.h>

int *randomArray(int n)
{
    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
        return NULL;

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    return arr;
}

int main(void)
{
    int n = 5;
    int *a = randomArray(n);

    if (a == NULL)
        return 1;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}