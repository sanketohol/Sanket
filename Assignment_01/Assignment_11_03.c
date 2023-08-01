//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user and accept one another number as No,
// return index of last occurrence of that No
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     LastOcc
//  Input :             Array Integer Integer
//  Output :            Integer
//  Description :       Return index of last Occurance of Number
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = (iLength-1); i >= 0; i--)
    {
        if((Arr[i]) == iNo)
        {
            break;
        }
    }

    return i;
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue = 0;
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

    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    
    iRet = LastOcc(ptr, iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occurance of Number is %d", iRet);
    }
    

    free(ptr);

    return 0;
}