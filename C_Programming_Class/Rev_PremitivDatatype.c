#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 10;
    float f = 20.99f;
    double d = 90.898967;

    printf("Value of i : %d\n", i);
    printf("Value of ch : %c\n", ch);
    printf("Value of f : %f\n", f);
    printf("Value of d : %f\n", d);

    printf("Address of i : %d\n", &i);
    printf("Address of ch : %d\n", &ch);
    printf("Address of f : %d\n", &f);
    printf("Address of d : %d\n", &d);

    printf("Size of i : %d\n", sizeof(i));
    printf("Size of ch : %d\n", sizeof(ch));
    printf("Size of f : %d\n", sizeof(f));
    printf("Size of d : %d\n", sizeof(d));
    

    return 0;
}