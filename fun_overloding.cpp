
// whith return 
// function over loding example
#include<iostream>
using namespace std;
 class hello{
    public:
    int test (int a)
    {
         return a*a;
    }
    int test (int a, int b)
    {
         return a*b;
    }
    double test (double a)
    {
        return a*a*a;
    }
    int test (int a,int b,int c)
    {
         return a+b+c;
    }
 };

 int main()
 {

    hello t;
    cout<<"addition  of a , b and c :"<<t.test (7,8,9)<<endl;
    cout<<"cube of a :"<<t.test (7)<<endl;
    cout<<"rectuangle of a and b:"<<t.test (7,9)<<endl;
    cout<<"doble of :"<<t.test (7.22)<<endl;
 }