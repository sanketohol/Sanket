//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept number from user and return multiplication of all digits
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     MultDigits
//  Input :             Integer
//  Output :            Integer
//  Description :       Multiplication of all digits
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iAns = iAns * iDigit;
        iNo = iNo / 10;
    }

    return iAns;    
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

    iRet = MultDigits(iValue);

    printf("The Multiplication of Numbers in is : %d",iRet);
    
    return 0;
}