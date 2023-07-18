#include<iostream>
using namespace std;
class student {

private :
int admno;
char sname[20];
float eng,math,sci,total;

 
 float  ctotal()
{
    return  eng+math+sci;
}

public :

 void takedata ()
 {
      cout<<"admin no :"<<admno<<endl;
      cin>>admno;
      
      cout<<" s name :"<<sname<<endl;
      cin>>sname;
      
      cout<<" enter eng marks :"<<eng<<endl;
      cin>>eng;
      
      cout<<"enter math marks:"<<math<<endl;
      cin>>math;
      
      cout<<"enter eng marks :"<<eng<<endl;
      cin>>eng;

   total =ctotal();
 }

 void showdata()
 {
      cout<<"admin no :"<<admno<<endl;
       cout<<" s name :"<<sname<<endl;
       cout<<" enter eng marks :"<<eng<<endl; 
       cout<<"enter math marks:"<<math<<endl;
    cout<<"enter eng marks :"<<eng<<endl;
    cout<<"total mark"<<total<<endl;
    
    
 }
};

int main()
{

    student a;
    a.takedata();
     a.showdata();
   }