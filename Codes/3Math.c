#include <stdio.h>
#include <math.h>

int main() {
    double x = 16.0;
    double y = -9.0;
    double a = 2.5;
    double b = 3.0;

    printf("sqrt(16) = %.2f\n", sqrt(x));
    printf("pow(2.5, 3) = %.2f\n", pow(a, b));
    printf("ceil(2.3) = %.0f\n", ceil(2.3));
    printf("floor(2.9) = %.0f\n", floor(2.9));
    printf("fabs(-9.0) = %.2f\n", fabs(y));
    printf("sin(0.5) = %.4f\n", sin(0.5));
    printf("cos(0.5) = %.4f\n", cos(0.5));
    printf("tan(0.5) = %.4f\n", tan(0.5));

    return 0;
}

/*
Compile with:
    gcc 3Math.c -lm
*/
