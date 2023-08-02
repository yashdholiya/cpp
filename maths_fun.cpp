/*    ceil   -> roud up 
       floor  ->   roud down
       round ->   rounded 
       sqrt ->  squre root  ( 16 -> ans 4)
       abs -> absolute value 
       pow(x,y) ->  x to power y 
       rand -> random value genrate 
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
 using namespace std;
 int main ()
    {
            cout<<" Ans a :"<<ceil(2.8)<<endl;
            cout<<" Ans a :"<<ceil(-2.8)<<endl;
            cout<<" Ans a :"<<floor(2.4)<<endl;
            cout<<" Ans a :"<<round(2.8)<<endl;
            cout<<" Ans a :"<<sqrt(16)<<endl;
            cout<<" Ans a :"<<sqrt(5)<<endl;
            cout<<" Ans a :"<<abs(9)<<endl;
            cout<<" Ans a :"<<abs(-17)<<endl;
            cout<<" Ans a :"<<pow(2,8)<<endl;
            cout<<" Ans a :"<<rand()%100<<endl;     // %100 mins 0 to 100 ni vacche nin value




                int a,b,c;
                a= rand ()%99;
                a= rand ()%50;
                a= rand ()%20;

                cout<<"value of a :"<<a<<endl;
                cout<<"value of b :"<<b<<endl;
                cout<<"value of c :"<<c<<endl;
    }
 