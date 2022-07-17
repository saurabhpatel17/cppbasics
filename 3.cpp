#include<iostream>
using namespace std;
//Conditional statements
/*int main()
{
    int RollNo;
    cout<<"Enter Your RollNo"<<endl;
    cin>>RollNo;
    if(RollNo==5)
    {
      cout<<"Is 5";
    }
    else 
    {
      cout<<"Is not 5";
    }
    
    return 0;
}
*/
//Data Validation
/*int main()
{
    int a,b,c;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Division By 0 is not possible";
    }
    else
    {
        cout<<"Division is "<<a/b;
    } 
  return 0;
}*/
//compund conditional statements
int main()
{
    int hours;
    cout<<"Enter Hours"<<endl;
    cin>>hours;
    if(hours>=9 && hours<=18)
    {
        cout<<"Working"<<endl;
    }
    else 
    {
        cout<<"Leisure"<<endl;
    }
}