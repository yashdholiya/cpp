#include<iostream>
using namespace std;
 
 class test{
    public:
    test ()
    {
        cout<<" value of a :"<<endl; 
     }

    test  (int a) //  test(argument ) = no argument pass
    {
            cout<<"difult com........ :"<<endl;
    }
    test (char a)
    {
            cout<<" char   com.....:"<<endl;
    }

    test(int a, int b)
    {
        cout<<" sum of a and b :"<<a+b<<endl;
    }
    test (int a, int b, int c)
    {
         cout<<" procudt a,b and c :"<<a*b*c<<endl;
    }
 };

int main()
{
    test t, a(50),b('A'),c(10,20),d(2,3,4);
    
}