#include <stdio.h>
#include <math.h>

double cot(void *px, int type)
{
    double y;

    switch (type) {
        case 1:
            y = (double)*(int *)px;
            break;

        case 2:
            y = (double)*(float *)px;
            break;

        case 3:
            y = *(double *)px;
            break;

        default:
            return NAN;
    }

    return 1.0 / tan(y);
}

int main(void) {
    int a;
    double dx, cotval1, cotval2;

    a = 1;
    dx = 1.0;

    cotval1 = cot(&a, 1);
    cotval2 = cot(&dx, 3);
    printf("%f %f" ,cotval1, cotval2);
    return 0;
}