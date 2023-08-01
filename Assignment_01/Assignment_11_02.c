//////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers from user and accept one another number as No,
// return index of first occurrence of that No
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     FirstOcc
//  Input :             Array Integer Integer
//  Output :            Integer
//  Description :       Return First Occurance of Number
//  Author :            Sanket Ravindra Ohol
//  Date :              15/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) == iNo)
        {
            break;
        }
    }

    if (i == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return i;
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
    
    iRet = FirstOcc(ptr, iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occurance of Number is %d", iRet);
    }
    

    free(ptr);

    return 0;
}