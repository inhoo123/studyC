#include <stdio.h>
int main () {
    float r, pi, area;

    pi = 3.14;
    r = 2.3;
    area = pi * r * r;

    printf("반지름이 %.1fcm인 원의 넓이: %.4f cm^2\n", r, area);

    return 0;
}