#include <stdio.h>

double square(double x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * x;
}

int main(void)
{
    double (*func)(double);

    func = square;
    printf("%f\n", func(3.0));

    func = cube;
    printf("%f\n", func(3.0));

    return 0;
}