#include<iostream>
using namespace std;
class test{
int a,  b;


public:

test ()
{
  a=5,b=10;
    cout<<"test class called...:"<<endl;
    cout<<"product is  a*b:"<<a*b<<endl;
}

test (test &x)
{
    cout<<"copy con......:"<<endl;
    cout<<"product is  a*b:"<<x.a*x.b<<endl;

}
};

int main()
{
    test t;
    test b(t);

}