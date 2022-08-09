#include<iostream>
using namespace std;
//Inheritance example considering base class as rect class

class rect
{
    private:
    int len;
    int breadth;
    public:
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
//Inheritance example considering derived class as cuboid class
class cuboid:public rect
{
  private:
  int height;
  public:
  cuboid(int l=0,int b=0,int h=0)
  {
    height=h;
    setLength(l);
    setBreadth(b);
  }
  int getHeight()
  {
    return height;
  }
  void setHeight(int h)
  {
    height=h;
  }
  int volume()
  {
    return getLength()*getBreadth()*height;
  }
};

int main()
{   
    cuboid c1;
    c1.setLength(10);
    c1.setBreadth(23);
    c1.setHeight(10);
    cout<<"Area of c1 = "<<c1.area()<<endl;
    cout<<"Perimeter of c1 = "<<c1.perimeter()<<endl;
    cout<<"Length of c1 = "<<c1.getLength()<<endl;
    cout<<"Breadth of c1 = "<<c1.getBreadth()<<endl;
    cout<<"Volume of c1 = "<<c1.volume()<<endl;

    return 0;
}
