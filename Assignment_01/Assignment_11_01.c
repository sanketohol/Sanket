//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user and accept one another number as No,
// check whether No is present or not.
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Check
//  Input :             Array Integer Integer
//  Output :            Boolean
//  Description :       Check whether No is present or not in numbers
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) == iNo)
        {
            break;
        }
    }

    if(i == iLength)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}



//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr = 0;
    int iCnt = 0;
    BOOL bRet = FALSE;

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

    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    
    bRet = Check(ptr, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is Not Present");
    }

    free(ptr);

    return 0;
}