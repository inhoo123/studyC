#include <stdio.h>
int main()
{
    int int1, int2, int3 = 8;
    double r1, r2;

    int1 = int3 / 5;
    int2 = int3 / 5.0;
    r1 = (double)(int3 / 5);
    r2 = (double)int3 / 5;

    printf("int1 = %d\n", int1);
    printf("int2 = %d\n", int2);
    printf("r1 = %.1f\n", r1);
    printf("r2 = %.1f\n", r2);
}