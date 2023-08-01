#include<stdio.h>
#pragma pack(1)

struct Student
{
    int RID;
    int Age;
    double Marks;
    char Division;
    float Salary;
};

int main()
{
    struct Student obj97;
    struct Student obj260;
    struct Student *ptr = NULL;
    
    obj97.RID = 97;
    obj97.Age = 25;
    obj97.Marks = 87.99;
    obj97.Division = 'A';
    obj97.Salary = 34000.00;

    obj260.RID = 260;
    obj260.Age = 27;
    obj260.Marks = 81.99;
    obj260.Division = 'C';
    obj260.Salary = 45120.00;

    ptr = &obj97;

    printf("RID of Datta : %d\n",ptr->RID);
    printf("Age of Datta : %d\n",ptr->Age);
    printf("Salary of Datta : %f\n",ptr->Salary);

    ptr = &obj260;
    printf("RID of Omkar : %d\n",ptr->RID);
    printf("Age of Omkar : %d\n",ptr->Age);
    printf("Salary of Omkar : %f\n",ptr->Salary);

    return 0;
}