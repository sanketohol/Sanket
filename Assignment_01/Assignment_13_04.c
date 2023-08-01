//////////////////////////////////////////////////////////////////////////////
//
// Design Application for Tourist Company
// If Running(kms) are less than 100km = 25/km
// If Running(kms) are more than 100km = 15/km after 100kms
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     TouristBill
//  Input :             Integer
//  Output :            Integer
//  Description :       Return Fare of kms running
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int TouristBill(int iKilometer)
{   
    int iRent = 0;

    if(iKilometer <= 100)
    {
        iRent = 25*iKilometer;
    }
    else if(iKilometer > 100)
    {
        iRent = 2500 + 15*(iKilometer - 100);
    }

    return iRent;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   int iKms = 0;
    int iRet = 0;

    printf("Enter The Kms : \n");
    scanf("%d",&iKms);

    iRet = TouristBill(iKms);
    printf("The Total Fare for %d Kilometers is : %d",iKms, iRet);

    return 0;
}