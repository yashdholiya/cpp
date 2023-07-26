#include<iostream>
using namespace std;
class test{

    int real , img;
    friend test add (test , test );  // friend function declare 

    public :
    void setdata (int a , int b)
    {
        real = a, img = b;
    }
    void getdata()
    {
        cout<<"number :"<<real <<"+"<<img <<"i"<<endl;

    }
};

test add (test x , test y)     // object as argument 
{
    test z;
    z.real = x.real + y.real;
    z.img = x.img + y. img ;
    return z;   // object as return 
}

int main()
{
    test t,s,p;
    t.setdata (2,3);
    t.getdata();
    s.setdata (4,5);
    s.getdata();


    p=add(t,s);
    p.getdata();


}