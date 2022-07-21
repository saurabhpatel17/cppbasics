#include<iostream>
using namespace std;
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float x=2.5,y=7.9,z;
    z=add(x,y);
    cout<<"The addition is "<<z;
    return 0;
}