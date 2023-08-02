// friend function using overloading

#include<iostream>
using namespace std;
class rect{
    private :
    int l,b;
    public:
    void setdata(int,int );
    int getarea()
    {
        return l*b;
    }
    friend rect operator+(rect p, rect q)    //  bynary opreator
    {
        rect t;
        t.l=p.l +q.l;
         t.b=p.b +q.b;
         return t;
    }
    friend rect operator++(rect p)    // unary operator
    {
        rect t;
        t.l=++p.l;
        t.b=++p.b;
        return t;
    }
};
void rect :: setdata(int x, int y)
{
    l=x, b=y;
}
int main()
{
    rect r,a,c,d;
    r.setdata(4,3);
    cout<<"area of rectangle is :"<<r.getarea()<<endl;
    a.setdata(5,6);
    cout<<"area of rectangle is :"<<a.getarea()<<endl;

    c= r+a;    // 9  9
    cout<<"area of rectangle is :"<<c.getarea()<<endl;

    d= ++c;  // 10  10
    cout<<"area of rectangle is :"<<d.getarea()<<endl;
}
