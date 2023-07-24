// binary operator overloading 
#include<iostream>
using namespace std;
class box{
    int l,b,h;
    public :
    int setdata(int x, int y, int z)
    {
        x=l, y=b, z=h;

    }
    int getdata()
    {
        return l*b*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l =l +n.l;
        t.b =b +n.b;
        t.h =h +n.h;
        return t;
    }
};
int main()
{
    box a,b,c;
    a.setdata(2,3,4);
    cout<<"volume of box A is :"<<a.getdata()<<endl;

    b.setdata(4,5,6);
    cout<<"volume of box B is :"<<b.getdata()<<endl;

    c=a+b;
    cout<<"volume of box C is  :"<<c.getdata()<<endl;

}