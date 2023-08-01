#include<stdio.h>


void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 49 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 99)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}