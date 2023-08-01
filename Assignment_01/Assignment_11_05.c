//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user &
// return product of all Odd Elements
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Product
//  Input :             Array Integer
//  Output :            Integer
//  Description :       Product of all Odd Elements
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iAns = 1;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iAns = iAns * Arr[iCnt];
            iCount++;
        }
    }

    if (iCount == 0)
    {
        return 0;
    }
    else
    {
        return iAns;
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
    int iRet = 0;

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
    
    iRet = Product(ptr, iSize);
    printf("The Product of all Odd Elements is : %d", iRet);

    free(ptr);

    return 0;
}