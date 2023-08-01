//////////////////////////////////////////////////////////////////////////////
// Accept character form user and check whether it is small case or not
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     ChkDigit
//  Input :             Character
//  Output :            BOOL
//  Description :       Check whether characted is small case or not
//  Author :            Sanket Ravindra Ohol
//  Date :              29/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{   
    if ((ch >= 'a') && (ch <= 'z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is a Small Case Character \n");
    }
    else
    {
        printf("It is Not a Small Case Character \n");
    }
    
    return 0;
}