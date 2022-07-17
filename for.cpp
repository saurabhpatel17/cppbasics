#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,fact=1;
    cout<<"enter Value of n"<<endl;
    cin>>n;
    /* Sum of first n natural numbers
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
    */
   /* factorial of a number
   for(i=1;i<=n;i++)
   {
    fact*=i;
   }
   cout<<"Factorial of "<<n<<" is "<<fact;
   */
  /*factors of a number
  cout<<"Factors of "<<n<<" are"<<endl;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      cout<<i<<endl; 
    }
   
  }
  */
 
 for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      sum+=i; 
    }
  }
    cout<<"Sum of factors of "<<n<<" is ="<<sum<<endl;
    if(sum==n*2)
    {
        cout<<n<<" is a perfect number";
    }
    else 
    {
        cout<<n<<" is not a perfect number";
    }


    
    return 0;
}