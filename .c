#include<stdio.h>
int main()
{
    int i,j,student=3,day=5,attendance[student][day],total=0;
    printf("enter attendance 1 for present,0 for absent\n");
    for(i=0;i<student;i++)
    {
        printf("enter the attendance of%d student",i+1);
        for(j=0;j<day;j++)
        {
            scanf("%d",&attendance[i][j]);
        }

    }
    printf("total attendance per student\n");
    for(i=0;i<student;i++)
    {
        for(j=0;j<day;j++)
        {
            total =total+attendance[i][j];
        }
        printf("student%d:%days\n",i+1,total);
    }
}
