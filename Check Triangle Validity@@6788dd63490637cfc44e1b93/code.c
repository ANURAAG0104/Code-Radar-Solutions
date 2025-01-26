#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d ", &a);
    scanf("%d ", &b);
    scanf("%d", &c);

    int sa, sb, sc;
    sa=b+c;
    sb=a+c;
    sc=a+b;

    if(sa>a && sb>b && sc>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}