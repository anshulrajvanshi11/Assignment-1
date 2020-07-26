#include<iostream>
using namespace std;
int main ()
{
    int a[50],c,n,i,j;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter the value of array";
    for(i=0;i<n;i++)
    {

        cin >> a[i];
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {


                    c=a[i];
                a[i]=a[j];
                a[j]=c;
                }
            }
        }

    cout<< "second largest number :" << a[i];
    cout<< "\nsecond smallest number :"<< a[n-2];
    return 0;
}
