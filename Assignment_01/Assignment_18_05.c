//////////////////////////////////////////////////////////////////////////////
//  Input : iRow = 6    iCol = 6
//  Output : 
//  1   2   3   4
//  1   *   *   4
//  2   *   *   4
//  1   2   3   4
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display
//  Input :             Integer Integer
//  Output :            Void
//  Description :       Display Pattern
//  Author :            Sanket Ravindra Ohol
//  Date :              16/05/2023
//  Update Date :       00/00/2023
//
//////////////////////////////////////////////////////////////////////////////

void Display(int iRow,int iCol)
{   
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {   
        if(iRow != iCol)
        {
            printf("Invalid Input");
            return;
        }
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow))
            {
                printf("%d\t",j);
            }
            else if((j == 1))
            {
                printf("%d\t",j);
            }
            else if (j == iCol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}