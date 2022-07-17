#include<iostream>
using namespace std;
int main()
{
    /* Garbage value if not initialised
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }*/
   /* rest 0 if some are initialised 
    int a[5]={2,5};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    */
  /* for each loop
    int a[]={2,3,5,5,3,2,4,2};
    for(int x:a)
    {
        cout<<x<<endl;
    }
    */
   /* Using auto in for each loop
   float a[]={2.5f,3.5f,5,5,3.8f,2,4,2};
    for(auto x:a)
    {
        cout<<x<<endl;
    }
    */
   char a[]={65,66,67,97,98,69};
    for(auto x:a)
    {
        cout<<x<<endl;
    }
}