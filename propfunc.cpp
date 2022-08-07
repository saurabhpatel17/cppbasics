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
    void setLength(int l)
    {
        len=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
       return len;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{   
    rect r1;
    r1.setLength(10);
    r1.setBreadth(23);
    cout<<"Area of r1 = "<<r1.area()<<endl;
    cout<<"Perimeter of r1 = "<<r1.perimeter()<<endl;
    cout<<"Length of r1 = "<<r1.getLength()<<endl;
    cout<<"Breadth of r1 = "<<r1.getBreadth()<<endl;

    return 0;
}
