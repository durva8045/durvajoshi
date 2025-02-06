//max,min of two no.
#include<stdio.h>
int main(){
    int a,b,max,min;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    printf("max=%d min=%d",max,min);
    return 0;
}