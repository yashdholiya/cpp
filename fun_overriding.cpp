// function over riding 
// vartual function 


 #include<iostream>
 using namespace std;
 class base{
    public:
    virtual void test()   //   virtual function
    {
        cout<<"base class function called  :"<<endl;

    }
 };

 class derived : public base {
    public:
    void test()
    {
        cout<<" derived class function called :"<<endl;

    }
 };

 int main()
 {
    base *ptr,b;
    derived d;
    ptr = &d;
    ptr -> test ();

    ptr = &b;
    ptr -> test();
 }