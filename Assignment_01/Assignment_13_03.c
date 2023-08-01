//////////////////////////////////////////////////////////////////////////////
//
// Design School Management System for Std wise School Fees
// For First Std Fees = 8900
// For Second Std Fees = 12790
// For Third Std Fees = 21000
// For Fourth Std Fees = 23450
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     SchoolFees
//  Input :             Integer
//  Output :            Integer
//  Description :       Return School Fees
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int SchoolFees(int iStd)
{   
    int iFees = 0;

    switch (iStd)
    {
        case 1:
            iFees = 8900;
            break;
        case 2:
            iFees = 12790;
            break;

        case 3:
            iFees = 21000;
            break;
        case 4:
            iFees = 23450;
            break;

        default:
            iFees = -1;
    }

    return iFees;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   int Std = 0;
    int iRet = 0;

    printf("Enter The Standard : \n");
    scanf("%d",&Std);

    iRet = SchoolFees(Std);
    
    if(iRet == -1)
    {
        printf("Invalid Input \n");
    }
    else
    {
    printf("The Fees of the Standard %d is : %d",Std, iRet);
    }

    return 0;
}