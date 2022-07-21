#include<iostream>
using namespace std;
int add(int x,int y)
{ 
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    int x=2,y=7,z,d;
    z=add(x,y);
    cout<<"The addition of "<<x<<"and"<<y<<"="<<z<<"\n";
    d=add(x,y,z);
    cout<<"The addition of "<<x<<"+"<<y<<"+"<<z<<"="<<d<<"\n";
    float a=2.8,b=7.9945,e;
    e=add(a,b);
    cout<<"The addition of "<<a<<"and"<<b<<"="<<e<<"\n";
    return 0;
}