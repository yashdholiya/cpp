#include<iostream>
using namespace std;
int main()
{

    int a,b,c=11;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=5; b++)
        {
            cout<<"\t"<<c++;
        }
        cout<<"\n";
        c+=5;
    }
}