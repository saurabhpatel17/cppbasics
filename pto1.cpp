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
{   /*
    //Object in a stack
    rect r1;
    rect *ptr;
    ptr=&r1;
    ptr->len=10;
    ptr->breadth=23;
    cout<<"Area of r1 = "<<ptr->area()<<endl;
    cout<<"Perimeter of r1 = "<<ptr->perimeter()<<endl;4
    */
    //Object in a Heap
    rect *ptr=new rect();
    ptr->len=10;
    ptr->breadth=23;
    cout<<"Area of r1 = "<<ptr->area()<<endl;
    cout<<"Perimeter of r1 = "<<ptr->perimeter()<<endl;
    return 0;
}