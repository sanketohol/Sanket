//////////////////////////////////////////////////////////////////////////////
//
// Design application for Incom Tax Department to Calculate Tax
// If Income is Less than 5 Lakh = No Tax
// If Income is 5 to 10 Lakh Tax = 10%
// If Income is 10 to 20 Lakh Tax = 20%
// If Income is Above 20 Lakh Tax = 30%
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     IncomeTax
//  Input :             Integer
//  Output :            float
//  Description :       Calculate Tax as New Tax Regime
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
    float fTax = 0.0;
    if(iAmount <= 500000)
    {
        fTax = 0;
    }
    else if (iAmount <= 1000000)
    {
        fTax = (iAmount - 500000) * 0.1;
    }
    else if (iAmount <= 2000000)
    {
        fTax = 50000 + (iAmount - 1000000) * 0.2;
    }
    else if (iAmount > 2000000)
    {
        fTax = 50000 + 200000 + (iAmount - 2000000) * 0.3;
    }

    return fTax;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Income = 0;
    float fRet = 0.0;

    printf("Enter The Income : \n");
    scanf("%d",&Income);

    fRet = IncomeTax(Income);
    printf("The Tax for the Income %d is : %f",Income, fRet);
    
    return 0;
}