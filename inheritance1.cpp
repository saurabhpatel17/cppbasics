#include<iostream>
using namespace std;
class base
{
    public:
     int a;
     void show()
     {
        cout<<"Show of Base class "<<a<<endl;

     }
};
class derived:public base
{
 public:
  void display()
  {
    cout<<"Display of derived Class "<<a<<endl;
  }
};
int main()
{
    derived d;
    base b;
    d.a=69;
    d.show();
    d.display();
    b.show();
    return 0;
}