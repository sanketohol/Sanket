#include<stdio.h>

void Display(int iNo)
{
    if((iNo % 10 == 0))
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}