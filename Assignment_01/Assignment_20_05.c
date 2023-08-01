//////////////////////////////////////////////////////////////////////////////
// Accept character form user and check whether it is small case or not
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplaySchedule
//  Input :             Character
//  Output :            Void
//  Description :       Display Exam Schedule
//  Author :            Sanket Ravindra Ohol
//  Date :              29/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{   
    if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
    
    switch (ch)
    {
    case 'A':
        printf("Exam of Division A is at 07.00 AM");
        break;
    case 'B':
        printf("Exam of Division B is at 08.30 AM");
        break;    
    case 'C':
        printf("Exam of Division C is at 09.20 AM");
        break;
    case 'D':
        printf("Exam of Division D is at 10.20 AM");
        break;    
    default:
        printf("Enter a Valid Division between A, B, C, D");
        break;
    }
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   
    char cValue = '\0';


    printf("Enter Your Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}