//swap
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a,b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=a;
printf("a=%d b=%d",a,b);
return 0;
}