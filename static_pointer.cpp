

// static member 
#include<iostream>
using namespace std;
class bank {
    int bal;
    string name;
    public :
    static int a;
    void setdata(int bal, string name )
    {
      this->  bal=bal;
      this ->  name=name;
      a++;
    }
    static int fun()
    {
        return a;
    }
    void getdata()
    {
        cout<<"your name is :"<<name<<endl;
          cout<<"your balance is :"<<bal<<endl;
    }
};
int bank :: a;
int main()
{
    bank b,a;
    cout<<"initial value of a  is :"<<bank :: a<<endl;
    b.setdata(15000,"skill");
    a.setdata(15000,"skill");
    // b.getdata();
     cout<<"final value of a  is :"<<bank :: a<<endl;
     cout<<"initial value of a  is :"<<bank :: fun()<<endl;


}