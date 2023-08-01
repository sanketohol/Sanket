//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept n numbers from user and return frequecy of even numbers
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CountEven
//  Input :             Array Integer
//  Output :            Integer
//  Description :       Return Frequency of Even Numbers
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

BOOL CountEven(int Arr[], int iLength)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) == 11)
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
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
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
    
    bRet = CountEven(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Not Present");
    }

    free(ptr);

    return 0;
}