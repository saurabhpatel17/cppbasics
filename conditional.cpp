//Conditional Statements
//if and compound statements
#include<iostream>
using namespace std;
int main()
{
    /*int rollno;
    cout<<"enter roll no"<<endl;
    cin>>rollno;
    if(rollno>1)
    {
        cout<<"Valid Rollno";
    }
    else
    {
        cout<<"Not A Valid Rollno";
    }
    */
   int hour;
   cout<<"Enter hours"<<endl;
   cin>>hour;
   if(hour>=9 && hour<=18)
   {
    cout<<"Working Hours";
   }
else 
{
    cout<<"leisure";
}
return 0;

}