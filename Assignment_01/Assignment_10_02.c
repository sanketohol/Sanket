//////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept n numbers from user and return difference between frequecy of even & odd numbers
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Frequency
//  Input :             Array Integer
//  Output :            Integer
//  Description :       Return Diff Between Frequency of Even & Odd Num
//  Author :            Sanket Ravindra Ohol
//  Date :              12/05/2023
//  Update Date :       00/00/2023
//
////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int i = 0;
    int iCount1 = 0;
    int iCount2 = 0;

    for(i = 0; i < iLength; i++)
    {
        if(((Arr[i]) % 2) == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }
    
    return (iCount1-iCount2);
}


//////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
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
    
    iRet = Frequency(ptr, iSize);
    printf("The Difference Between frequency of Even & Odd numbers is : %d", iRet);

    free(ptr);

    return 0;
}