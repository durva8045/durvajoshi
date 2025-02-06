//convert days into months and days
#include<stdio.h>
#include<conio.h>
void main(){
    int d,days,month;
    printf("enter the no of days:");
    scanf("%d",&d);
    month=d/30;
    days=d%30;
    printf("month=%d and days=%d",month,days);
    getch();
}
