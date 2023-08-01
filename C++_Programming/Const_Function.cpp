#include<iostream>
using namespace std;

//Constant function is such a function which cannot change the value of its caller object
class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11), D(21)   //Member Initialisation List
        {
           A = 0;
           B = 0; 
        }
        Demo(int i, int j, int k, int l) : C(k), D(l)
        {
           A = i;
           B = j;
        }
        void Fun()
        {
                A++;    //A
                B++;    //A
//                C++;    //NA
//                D++;    //NA
        }
        void Gun() const
        {
//                A++;    //NA
//                B++;    //NA
//                C++;    //NA
//                D++;    //NA
        }
};

int main()
{
        Demo obj1;
        const Demo obj2(11,21,51,101);

        obj1.Fun();
        obj1.Gun();

//        obj2.Fun();   //NA
        obj2.Gun();

    return 0;
}