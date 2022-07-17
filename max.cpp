#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,3,4,423,23,24};
    int n=6 ,sum=0,max;
    /*
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of all the elements in the array="<<sum;
    */
   max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Max element in the array="<<max;
    return 0;

}