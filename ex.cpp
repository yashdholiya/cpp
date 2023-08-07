#include<iostream>
using namespace std;
class base{

    public:
    void AB()
    {}

};


class derive1 : public base {
    public:
    int a ,b ;


    void get()
    {
        cout<<"enter the number : "<<endl;
        cin>>a;

            if(a > 0)
            {
                    cout<<"number is positive :"<<endl;
            }

             else if (a == 0 )
             {
                cout<<"number is zero :"<<endl;
             }
             else 
             {
                cout<<" number is nagitive : "<<endl;
             }
    }
};

class derive2 : public base 
{
    public:
    int a,b;

    void set()
    {
        cout<<"enter the a number : "<<endl;
        cin>>a;

        cout<<"enter the b number : "<<endl;
        cin>>b;

    }
    void set1 ()
    {
        if(a>b)
        {
            cout<<"a is big :";
        }

        else 
        {
            cout<<" b is  big   :";
        }
      
    }
};



 int main()
 {
    derive1 v;
    v.a;
    v.b;
    v.get();
    v.AB();


    derive2 t;
    t.a;
    t.b;
    t.set();
    t.set1();
    t.AB();

 }