#include<iostream>
using namespace std;
int main()
{
    int a[10],num,odd_sum,even_sum;

    for(int i=0; i<10; i++)
    {
        if( i%2 == 0){

        even_sum=even_sum+1;
        cout<<"even number "<<i;
        cout<<"\n";
    }
        else
        {
            odd_sum=odd_sum+1;
            cout<<"odd number"<<i;
        }
        }
        cout<<" sum od total odd \n"<<odd_sum;
        cout<<"sum even total even \n"<<even_sum;
    
}