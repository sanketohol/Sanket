//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user &
// return the largest number
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Maximum
//  Input :             Array Integer
//  Output :            Integer
//  Description :       Return the Largest Number
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int i = 0;
    int iMax = Arr[0];


    for(i = 0; i < iLength; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    
    return iMax;
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
    
    iRet = Maximum(ptr, iSize);
    printf("The Largest Number is : %d", iRet);

    free(ptr);

    return 0;
}