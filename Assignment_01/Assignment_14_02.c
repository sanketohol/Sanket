//////////////////////////////////////////////////////////////////////////////
//  Input : 5
//  Output : 5  #   4   #   3   #   2   #   1   #
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Integer
//  Output :            Void
//  Description :       Display Pattern
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    int i = 0;

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t",i);
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;

    printf("Enter the Number of Elements : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}