#include<iostream>
using namespace std;
class base1{
    protected :
    int a;
    public :
    void setA()
    {
        cout<<"enter a :";
        cin>>a;
    }
};
class base2{
    protected :
    int b;
    public :
    void setB()
    {
        cout<<"enter b :";
        cin>>b;
    }
};
class derived : public base1, public base2{
    public :
    void product()
    {
        cout<<"product of a and b is :"<<a*b<<endl;
    }
};
int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}