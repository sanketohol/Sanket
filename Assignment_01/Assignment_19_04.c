//////////////////////////////////////////////////////////////////////////////
//  Input : iRow = 6    iCol = 6
//  Output : 
//  *       *       *       *       *
//  *       *                       *
//  *               *               *       
//  *                       *       *
//  *       *       *       *       *
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
    
    if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {   
        for(j = 1; j <= iCol; j++)
        {
            if((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n");
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