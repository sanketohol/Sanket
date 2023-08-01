//////////////////////////////////////////////////////////////////////////////
//
// Design application for hotel.If Bill is less Ttha 500 then No Discount
// If Bill is Between 500 - 1500 then Discount = 10%
// If Bill is Above 1500 the Discount = 15%
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CalculateBill
//  Input :             Integer
//  Output :            float
//  Description :       Calculate bill amount after discount
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

float CalculateBill(int iBill)
{
    if(iBill <= 0)
    {
        printf("Please Enter Amount Greater than 0");
    }
    if(iBill < 500)
    {
        return (float)iBill;
    }
    else if (iBill >= 500 && iBill < 1500)
    {
        iBill = iBill - ((iBill * 10)/100);
    }
    else if(iBill >= 1500)
    {
        iBill = iBill - ((iBill * 15)/100);
    }

    return (float)iBill;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int BillAmount = 0;
    float fRet = 0.0;

    printf("Enter The Bill Amount : \n");
    scanf("%d",&BillAmount);

    fRet = CalculateBill(BillAmount);
    printf("The Bill After Discount is : %f",fRet);
    
    return 0;
}