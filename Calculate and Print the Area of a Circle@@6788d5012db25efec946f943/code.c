#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);

    float da;
    da= a*a;

    double area;
    area= 3.14*da;

    printf("Area: %lf", area);

    return 0;
}