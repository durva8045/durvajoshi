//student grade according to input marks(else if ladder)
#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("distinction");
    }
    else if(marks>=80 && marks<=90){
        printf("first class");
    }
     else if(marks>=50 && marks<=80){
        printf("second class");
    }
     else if(marks>=40 && marks<=50){
        printf("third class");
    }
     else if(marks>10 && marks<=40){
        printf("fail");
    }else{
        printf("invalid number");
    }
    return 0;
}