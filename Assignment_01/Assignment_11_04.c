//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user and accept range,
// Display all elements from given range
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Range
//  Input :             Array Integer Integer Integer
//  Output :            Void
//  Description :       Display all elements from given range
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    printf("The Numbers between %d and %d are : ",iStart,iEnd);
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) > iStart && Arr[i] < iEnd)
        {
            printf("%d    ",Arr[i]);
        }   
    }
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Number of Elements \n");
    scanf("%d",&iSize);

    printf("Enter The Starting Point : \n");
    scanf("%d",&iValue1);
    printf("Enter The Ending Point : \n");
    scanf("%d",&iValue2);

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
    
    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}