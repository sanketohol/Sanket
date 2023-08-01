//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user &
// Display Summation of Each Digit of Number
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DigitsSum
//  Input :             Array Integer
//  Output :            Void
//  Description :       Display Summation of Each Digit of Number
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int i = 0;
    int iDigit = 0;

    for(i = 0; i < iLength; i++)
    {   
        int iAns = 0;
        while (Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iAns = iAns + iDigit;
            Arr[i] = Arr[i] / 10;
        }      
        printf("%d    ", iAns);
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
    
    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}