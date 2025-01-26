#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    if(ch=="+"){
        int d=(a+b);
        printf("%d",d);
    }
    else if(ch=="-"){
        int d=(a-b);
        printf("%d",d);
    }
    else if(ch=="*"){
        int d=(a*b);
        printf("%d",d);
    }
    else{
        int d=(a/b);
        printf("%d",d);
    }
    return 0;
}