#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAns1 = 0;
    int iAns2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iAns1 = iAns1 + iCnt;
        }
        else
        {
            iAns2 = iAns2 + iCnt;
        }
        
    }

    return iAns1-iAns2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
     
}