#include<iostream>
using namespace std;
int main()
{

int a[10]={6,8,13,17,20,25,28,30,35};
int n,key,l=0,h=9,mid;
cout<<"Enter key"<<endl;
cin>>key;
while(l<=h)
{
mid=l+(h-l)/2;
if(key==a[mid])
{
    cout<<"Key found at index "<<mid<<endl;
    return 0;
}
else if(key<a[mid])
{
 h=mid-1;
}
else
{ 
    l=mid+1;
}
}

cout<<"!!! Key Not found"<<endl;
}
/* Linear Search
int a[100];
int n,key;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter elements of an array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter key"<<endl;
cin>>key;
for(int i=0;i<n;i++)
{
    if(a[i]==key)
    {
        cout<<"Key found at index "<<i<<endl;
        return 0;
    }
}
cout<<"!!!!Not found"<<endl;
}*/