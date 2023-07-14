#include<iostream>
using namespace std;
int main()
{
    int a,i,sum=0;

    cout<<"enter the a";
    cin>>a;

    for(i=0; i<=a; i+=2)
    {
       

        
            sum += i;
            cout<<"\t"<<i;
        
    }

    cout<<"sum"<<sum;
}