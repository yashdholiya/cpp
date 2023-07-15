#include<iostream>
using namespace std;
int main()
{

char   a,b;
   

    for(a=65; a<=69; a++)
    {
        for(b=65; b<=a; b++)
        {
            cout<<"\t"<<b;
        }
        cout<<"\n";
    }
}