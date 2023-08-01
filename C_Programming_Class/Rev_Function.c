#include<stdio.h>

int Multiplication(int A, int B)
{
    int Ans = 0;

    Ans = A * B;

    return Ans; 
}

int main()
{
    int No1 = 10;
    int No2 = 11;

    int Ret = 0;

    printf("Enter the value of No1 and No2 :\n");
    scanf("%d%d",&No1,&No2);

    Ret = Multiplication(No1,No2);

    printf("Multiplication is : %d\n", Ret);


    return 0;
}