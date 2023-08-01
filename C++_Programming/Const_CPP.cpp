#include<iostream>
using namespace std;

//if the class contains constant variables then using a constructor is compulsory
class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;
/*Not Allowed
        const int C = 11;
        const int D = 21;
Not Allowed*/
        Demo() : C(11), D(21)   //Member Initialisation List
        {
/*Not Allowed
            C = 11;
            D = 21;
Not Allowed*/
           A = 0;
           B = 0; 
        }

        Demo(int i, int j, int k, int l) : C(k), D(l)
        {
           A = i;
           B = j;
        }
};

int main()
{
    Demo obj;
    Demo obj2(11,21,51,101);

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";
    cout<<obj.C<<"\n";
    cout<<obj.D<<"\n";

    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";
    cout<<obj2.C<<"\n";
    cout<<obj2.D<<"\n";

    return 0;
}