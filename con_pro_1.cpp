#include<iostream>
using namespace std;


class marksheet{

    
int a,b,c,total;
float prs;

    public:
    marksheet()
    {
        cout<<"enter the eng mark :";
        cin>>a;
        cout<<"enter the guj mark :";
        cin>>b;
        cout<<"enter the hindi mark :";
        cin>>c;
        total=a+b+c;
        prs = (total*100)/300;
    

    }
    void display()
    {
        cout<<"eng mark :"<<a<<endl;
        cout<<"guj mark :"<<b<<endl;
        cout<<"hindi mark :"<<c<<endl;
        cout<<"total mark :"<<total<<endl;
        cout<<"percentage :"<<prs<<endl;
        
        
    }
};

int  main()
{
    marksheet k;
    k.display();
}
        