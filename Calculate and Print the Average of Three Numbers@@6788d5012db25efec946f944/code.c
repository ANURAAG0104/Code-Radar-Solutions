#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d ", &a);
    scanf("%d ", &b);
    scanf("%d", &c);

    int sum = (a+b+c);
    float avg;
    avg= (sum/3.0);
    printf("Average: %.2f",avg);
    return 0;
}