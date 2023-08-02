#include<iostream>
using namespace std;
class factorial{
    int a;
    public:
    void test()
    {}

};
class name : public  factorial
{
    public:
    int value;
    void get()
    {
    cout<<"ENter any number ";
        cin>>value;
    }

};
class derived : public name   
{
    public:
    int getdata()
    {
        name :: get () ;                               
        int fact=1,i;

      //  cout<<"ENter any number ";                    
      //  cin>>value;
         for(i=1;i<=value;i++)
        {    
         fact=fact*i;    
        }    
  cout<<"Factorial of " <<value<<" is: "<<fact<<endl;  
    }    
};
int main()
{
    derived m;
   // m. get();                                  
    m.getdata();
    m.test();
}