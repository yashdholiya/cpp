// table & reverse no up to n 
#include<iostream>
using namespace std;

class base{
    public:
    void teat()
    {}

};

class dreave1: public base {
     public:
   int   i,a=5;

     void  set ()
     {
        for(i=1; i<=10; i++)
        {
            a=5;
            cout<<"5"<<"*"<<i<<"="<<i*a<<endl;
        }
     }
 
};

class  dreave2: public base{
     public:
    int i,n;
    void reverse()
    {
         cout<<"enter the number :"<<endl;
         cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<"\n"<<i;
    }
    // cout<<"enter the number :"<<endl;
    // cin>>n;
      
    }

};
int main ()
{
    dreave1  d1;
    d1.a;
    d1.i;
    d1.set();
    d1.teat();


    dreave2    d2;
    d2.n;
    d2.i;
     d2.reverse();
    d2.teat();
   
    
}
 

