#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
    float iAns = 0.0;

    iAns = (iNo2 / iNo1) * 100;

    return iAns;
}

int main()
{
    float iValue1 = 0;
    float iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter Total Marks : \n");
    scanf("%d",&iValue1);

    printf("Please Enter Marks Obtained : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("The Percentage is %f",fRet);

    return 0;
}