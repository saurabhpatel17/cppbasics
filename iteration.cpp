//Iteration Statements
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter value of n"<<endl;
    cin>>n;
    /* While Loop
    while(i<=n)
    {
        cout<<i<<endl;
        ++i;
    }
*/
/* do while
do
{
    cout<<i<<endl;
    ++i;
} while (i<=n);
*/
for(i=1;i<=n;i++)
{
    cout<<i<<endl;
}
}