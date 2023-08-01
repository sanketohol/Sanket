//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user &
// Display all 3 Digit Numbers
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Digits
//  Input :             Array Integer
//  Output :            Void
//  Description :       Display all 3 Digit Numbers
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int iDigit = 0;

    for(i = 0; i < iLength; i++)
    {   
        if(Arr[i] > 99 && Arr[i] < 1000)
        {
            printf("%d   ",Arr[i]);
        }
    }
    
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
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
    
    Digits(ptr, iSize);

    free(ptr);

    return 0;
}