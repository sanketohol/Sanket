#include<stdio.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        return iNo3;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        return iNo2;
    }
    else if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iRet = 0;

    printf("Enter Any Two Number : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The Multiplication is : %d\n",iRet);

    return 0;
     
}