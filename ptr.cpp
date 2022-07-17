#include<iostream>
using namespace std;
int main()
{   
    int a=10;
    //dynamic allocation
    int *p=new int[5];
    p[0]=1;
    p[1]=7;
    p[2]=9;
    cout<<p[1]<<endl;
    delete []p;
    p=new int[10];
    p[0]=1;
    p[1]=7;
    p[2]=9;
    p[3]=69;
    cout<<p[3]<<endl;
    delete []p;
    p=nullptr;
    

    /*
    int a=10;
    int *p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    */
    return 0;
}