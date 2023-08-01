#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("  %d  ",iNo);
    }

}

int main()
{
    int iValue1 = 0;
    int iCount = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue1,iCount);

    return 0;
}