#include<iostream>
using namespace std;
class rect
{
    public:
    int len;
    int breadth;
    int area()
    {
        return len*breadth;

    }
    int perimeter()
    {
        return 2*(len+breadth);
    }
};
int main()
{
    rect r1,r2;
    r1.len=5;
    r1.breadth=10;
    cout<<"Perimeter of r1 = "<<r1.perimeter()<<"\n";
    cout<<"Area of r1 = "<<r1.area()<<"\n";
    r2.len=50;
    r2.breadth=24;
    cout<<"Perimeter of r2 = "<<r2.perimeter()<<"\n";
    cout<<"Area of r2 = "<<r2.area()<<"\n";
    return 0;
}