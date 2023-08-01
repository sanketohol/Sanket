//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept n numbers from user and display number is even and divisible by 5
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Void
//  Output :            Integer
//  Description :       Display Numbers Which are Even and Divisible by 2 and 5
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("The Numbers Divisible by 2 & 5 are : \n");
    for(i = 0; i < iLength; i++)
    {
        if(((Arr[i]) % 2) == 0 && ((Arr[i]) % 5) == 0)
        {
            printf("%d    ",Arr[i]);
        }
    }
}


//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;

    printf("Enter the Number of Elements \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter Element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr, iSize);

    free(ptr);

    return 0;
}