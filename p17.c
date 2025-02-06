//switch statement of using calculator
#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("enter the number a and b");
    scanf("%d%d",&a,&b);
    fflush(stdin);
  printf("enter the operator");
    scanf("%c",&op);
    switch(op){
        case'+':
        c=a+b;
        printf("%d",c);
        break;
        case'-':
        c=a-b;
        printf("%d",c);
        break;
        case'*':
        c=a*b;
        printf("%d",c);
        break;
        case'/':
        c=a/b;
        printf("%d",c);
        break;
        case'%':
        c=a%b;
        printf("%d",c);
        break;
        default:
        printf("invalid");
    }
return 0;
}