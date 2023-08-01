#include<stdio.h>

#include "PPA.h"

int main()
{
    struct Demo obj;

    printf("Inside Main\n");

    printf("Rate of Interest is : %f\n",ROI);

    printf("Fees of Logic Building Batch : %d\n", FEES);

    printf("Size of Demo Structure : %d\n", sizeof(obj));

    return 0;
}