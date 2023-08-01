//////////////////////////////////////////////////////////////////////////////
//
//Write a program to print 5 to 1 numbers on screen
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Call Function
//  Output :            Integer
//  Description :       Print 5 to 1 Numbers on Screen
//  Author :            Sanket Ravindra Ohol
//  Date :              10/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    for(i = 5; i >= 1; i--)
    {
        printf("%d \t",i);
    }
}

//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}