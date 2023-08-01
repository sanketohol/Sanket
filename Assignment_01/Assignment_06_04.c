#include<stdio.h>


void Table(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iAns = iNo*iCnt;
        printf("%d  ", iAns);
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}