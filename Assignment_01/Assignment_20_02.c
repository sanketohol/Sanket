//////////////////////////////////////////////////////////////////////////////
// Accept character form user and check whether it is capital or not
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     ChkCapital
//  Input :             Character
//  Output :            BOOL
//  Description :       Check whether characted is capital ot not
//  Author :            Sanket Ravindra Ohol
//  Date :              29/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{   
    if ((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is a Capital Character \n");
    }
    else
    {
        printf("It is Not a Capital Character \n");
    }
    
    return 0;
}