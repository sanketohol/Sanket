#include<iostream>
using namespace std;

float Area(float Radius = 10.7, float PI = 3.14f)
{
    float Ans = 0.0f;
    
    Ans = PI * Radius * Radius;

    return Ans;
}

int main()
{
    float R = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter the Radius : "<<"\n";
    cin>>R;

    fRet = Area(R);
    cout<<"Area of Circle is : "<<fRet<<"\n";

    fRet = Area(R,7.10f);
    cout<<"Area of Circle is : "<<fRet<<"\n";

    fRet = Area();
    cout<<"Area of Circle is : "<<fRet<<"\n";

    return 0;
}