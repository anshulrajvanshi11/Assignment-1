#include<iostream>
using namespace std;
int main()
{

int n,i,flag=0;
cout<<"enter the value of n";
cin>>n;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
    cout<<"is not a prime number";
    flag=1;
    break;
    }
}
if(flag==0)
{
    cout<<" is a prime number";

}

return 0;
}
