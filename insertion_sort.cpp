#include<iostream>
using namespace std;
int main()
{
int a[50],b,c,i,j,n;
cout <<"enter the value of n";
cin>>n;
cout<<"enter the value of array";
for(i=0;i<n;i++)
{
 cin>> a[i];
}
for(i=1;i<=n;i++)
{
    c = a[i];
    j=i-1;

}
while((j>=0 )&&(a[j]<c))
{
    a[j+1]=a[j];
    j=j-1;
}
a[j+1] = c;
for(i=0;i<n;i++)
{
    cout<<a[i];
}
return 0;

}
