//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept n numbers from user and return difference between summation of even and odd elements
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Difference
//  Input :             Integer
//  Output :            Integer
//  Description :       Difference Between Summation of Even and Odd Elements
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iAns1 = 0;
    int iAns2 = 0;

    for(i = 0; i < iLength; i++)
    {
        if(((Arr[i]) % 2) == 0)
        {
            iAns1 = iAns1 + Arr[i];
        }
        else
        {
            iAns2 = iAns2 + Arr[i];
        }
    }

    return (iAns1 - iAns2);
}


//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);
    printf("The Difference Between Even & Odd is : %d",iRet);

    free(ptr);
    
    return 0;
}