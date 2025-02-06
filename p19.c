//three input num which is minimum usinnd nested if
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&b,&a,&c);
    if(a<b){
        if(a<c){
            printf("a is min");
        }else{
            printf("c is min");
        }
    }else{
        if(b<c){
            printf("b is min");
        }else{
            printf("c is min");
        }
    }
    return 0;
}