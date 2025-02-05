#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a==1) printf("Monday");
    break;
    else if(a==2) printf("Tuesday");
    break;
    else if(a==3) printf("Wednesday");
    break;
    else if(a==4) printf("Thursday");
    break;
    else if(a==5) printf("Friday");
    break;
    else if(a==6) printf("Saturday");
    break;
    else printf("Sunday");

    return 0;
}