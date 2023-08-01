//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept number from user and return the count of digits in between 3 and 7
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CountRange
//  Input :             Integer
//  Output :            Integer
//  Description :       Count of Digits in between 3 And 7 in the Input
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;    
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

    iRet = CountRange(iValue);

    printf("The Count of Numbers in Range is : %d",iRet);
    
    return 0;
}