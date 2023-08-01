//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept number from user and check whether it contains 0 in it or not
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDigit
//  Input :             Integer
//  Output :            Boolean
//  Description :       Checks whether input contains zero in it or not
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);

    if(bRet == TRUE)
    {
        printf("The Number %d Contains 0 in it \n",iValue);
    }
    else
    {
        printf("The Number %d Does Not Contains 0 in it \n",iValue);
    }
    
    return 0;
}