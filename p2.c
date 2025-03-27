#include<stdio.h>
int main()
{
    int n=3,m=3,sum=0;
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum =sum+a[i][j];        }
    }
    printf("sum is%d",sum);
}
