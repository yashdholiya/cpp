 //this pointer 
#include<iostream>
using namespace std;
class Benk{
    public:
    int bal;
    string name;
    void setdata(int bal , string name )
    {
        this ->bal= bal;
         this ->name = name;
    }

    void getdata()
    {
        cout<<"your name :"<<name<<endl;
        cout<<"your balance :"<<bal<<endl;
    }
};

int main()
{
    Benk b;
    b.setdata(15000,"SKILL");
    b.getdata();

}