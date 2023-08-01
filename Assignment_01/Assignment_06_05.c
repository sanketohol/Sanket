#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     TableRev
//  Input :             Integer
//  Output :            Void
//  Description :       Checks whether input is even or odd
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo*iCnt;
        printf("%d  ", iAns);
    }

}

//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return 0;
}