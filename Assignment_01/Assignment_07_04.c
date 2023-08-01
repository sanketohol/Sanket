//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept number from user and count frequency of 4 in it
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CountFour
//  Input :             Integer
//  Output :            Integer
//  Description :       Count Frequency of 4 in the Number
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("The frequency of 4 in number %d is : %d",iValue,iRet);
    
    return 0;
}