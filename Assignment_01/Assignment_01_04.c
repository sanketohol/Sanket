//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept one number and check whether it is divisible by 5 or not
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Check
//  Input :             Integer
//  Output :            Boolean
//  Description :       Check Divisible by 5 or Not
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }

    return 0;
}