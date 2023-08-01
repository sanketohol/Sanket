//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept number from user and return difference between summation of even and odd digits
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     MultDigits
//  Input :             Integer
//  Output :            Integer
//  Description :       Difference Between Summation of Even and Odd Digits
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns1 = 0;
    int iAns2 = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iAns1 = iAns1 + iDigit;
        }
        else
        {
            iAns2 = iAns2 + iDigit;
        }
        iNo = iNo / 10;
    }

    return (iAns1-iAns2);    
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