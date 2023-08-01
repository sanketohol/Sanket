#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter Full Name : \n");
    fgets(Name, 80, stdin);

    printf("Your Name is %s",Name);

    return 0;
     
}