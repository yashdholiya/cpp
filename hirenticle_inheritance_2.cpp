#include<iostream>
using namespace std;
class base{
    public:
  void AB()
  {}
};

class derive1: public base 
{
    public:
    int a,b;
      void get()
      {
        for(a=5; a<10; a++)
        {
            for(b=5; b<=a; b++)
            {
                cout<<" "<<a;
            }
              cout<<" \n";
        }
      }
};

class derive2 : public base
{
    public:
    int a,b,c=1;

    void set()
    {
         for(a=1; a<=5; a++)
        {
            for(b=1; b<=a; b++)
            {
                
                cout<<" "<<c;
                 c++;
            }
              cout<<"\n";
        }
      }
};


int main()
{   
    derive1 f;
    f.a;
    f.b;
    f.get();
    f.AB();
    
    derive2 t;
    t.a;
    t.b;
    t.c;
    t.set();
    t.AB();
    
}

