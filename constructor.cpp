#include<iostream>
using namespace std;
class test{
    int a=5,b=10;

public:

test()  // defult con....
{
    cout<<"test class called ... "<<endl;
    cout<<"procduct of a and b is :"<<a*b<<endl;
}
test (int m)
{
    cout<<"value of m is:"<<m<<endl;
}

};

int main()
{
    test t,b(10); // b(10)  test (int m) call
}