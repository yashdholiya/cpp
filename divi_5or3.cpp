#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the a :";
    cin>>a;

    if(a % 3 ==0  ||  a % 5  == 0)
    {
        cout<<"divisible ";

    }
    else{
        cout << " not";
    }

}