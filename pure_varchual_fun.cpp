// function over riding 
// vartual function 
// pure virchual function 
//abstrction


 #include<iostream>
 using namespace std;
 class base{
    public:
    virtual void test()  =0 ; // pure varchual function 
    // {
    //     cout<<"base class function called  :"<<endl;

    // }
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
    base *ptr;
    derived d;
    ptr = &d;
    ptr -> test ();

    
 }