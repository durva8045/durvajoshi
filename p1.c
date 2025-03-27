#include<stdio.h>
int main()
{    int i,j,n,book[n],temp;
    printf("enter the number of book:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
    printf("enter the book id %d no:",i+1);
    scanf("%d",&book[i]);
        }

    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
    if(book[i]>book[j])
    {
        temp=book[i];
        book[i]=book[j];
        book[j]=temp;
    }
        }
        }
        printf("total no of book in ascending order is:");
        for(i=0;i<n;i++){
        printf("%d",book[i]);
        }


        }

