#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int units;
    float charge=0,total;

    printf("enter name");
    gets(name);
    printf("enter the units");


















    scanf("%d",&units);
    if(units<=100)
    {
        charge=units*0.60;
    }
    else if(units<=300)
        {

        charge=(100*0.60)+((units-100)*0.80);
    }
    else
    {
        charge=(100*0.60)+(200*0.80)+((units-300)*0.90);
    }


    if (charge<50)
        charge=50;
    if(charge>300)
        charge+=charge*0.15;
    printf("electricity bill\n");
    printf("name%s",name);
    printf("units consumed%d\n",units);
    printf("charge% .2f\n",charge);
}
