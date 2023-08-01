//////////////////////////////////////////////////////////////////////////////
//  Input : iRow = 4    iCol = 4
//  Output : 
//  A   B   C   D
//  a   b   c   d
//  A   B   C   D
//  a   b   c   d
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
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {   
        if((i % 2) != 0)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                    printf("%c\t",ch);
            }
        }
        else
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
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