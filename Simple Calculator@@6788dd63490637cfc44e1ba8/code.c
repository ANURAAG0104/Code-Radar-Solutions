#include <stdio.h>

int main() {
    int a, b, d;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);

    if(ch=='+'){
        d=(a+b);
        printf("%d",d);
    }
    else if(ch=='-'){
        d=(a-b);
        printf("%d",d);
    }
    else if(ch=='*'){
        d=(a*b);
        printf("%d",d);
    }
    else if(ch=='/'){
        d=(a/b);
        printf("%d",d);
    }
    else{
        printf("error");
    }
    return 0;
}