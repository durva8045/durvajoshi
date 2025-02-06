//simple calculation using else if ladder
#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("enter the operator");
    scanf("%c",&op);
    if(op=='+'){
        c=a+b;
        printf("%d",c);
    }
    else if(op=='-'){
        c=a-b;
        printf("%d",c);
    }
    else if(op=='*'){
        c=a*b;
        printf("%d",c);
    }
    else if(op=='/'){
        c=a/b;
        printf("%d",c);
    }
    else if(op=='%'){
        c=a%b;
        printf("%d",c);
    }
    else{
        printf("invalid operator");
    }

    }