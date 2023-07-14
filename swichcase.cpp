#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"enter the a :";
    cin>>a;
    
    cout<<"enter the b :";
    cin>>b;
    
    cout<<"enter the c :";
    cin>>c;
    
    switch(c)
    {
        case 1:
        cout<<" Ans : a+b"<<a+b;
        break;

        case 2:
        cout<<"Ans : a*b"<<a*b;
        break;

        case 3:
        cout<<" Ans : a/b"<<a/b;
        break;


        case 4:
        cout<<" Ans : a%b"<<a%b;
        break;

        default:
        cout<<" enter the valed value";
    }
    
}