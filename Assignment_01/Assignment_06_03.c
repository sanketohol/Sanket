#include<stdio.h>


int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iAns = iAns * iCnt;
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of Number is %d",iRet);   

    return 0;
}