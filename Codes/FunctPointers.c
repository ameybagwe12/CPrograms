#include<stdio.h>
#include<stdlib.h>

int *pointertothatint(int n)
{
    // this useless function returns a pointer to an
    // int of a chosen value. Useless, but works as
    // intended.
    int *fp;
    fp = (int *)malloc(sizeof(int));
    *fp = n;
    return fp;
}
void main()
{
    int *mp;
    mp = pointertothatint(14);
    printf("*mp = %d\n", *mp);
}