#include<iostream>
using namespace std;
class base
{
   public:
   base()
   {
    cout<<"default of base"<<endl;
   }
   base(int x)
   {
    cout<<"Parameterized of base "<<x<<endl;
   }

};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Default of derived"<<endl;
    }
    derived(int a)
    {
        cout<<"Parameterized of derived "<<a<<endl;

    }
    derived(int a,int x):base(x)
    {
        cout<<"Parameterized of derived "<<a<<endl;

    }
};
int main()
{
    derived d;
    derived d1(10);
    derived d2(10,20);
}