#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
if(a>b&&a>c)
{
    cout<<"a is the largets number";

}
else if(b>a&&b>c)
{
    cout<<"b is the largest number";

}
else
{
    cout<<"c is the largest";
}
}
