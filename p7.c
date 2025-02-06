//f to c
#include<stdio.h>
#include<conio.h>
void main(){
   float t,c;
   printf("enter the value of temp:");
   scanf("%f",t);
   c=(t-32)*(5.0/9.0);
   printf("temp in c=%f",c);
    getch();
}
