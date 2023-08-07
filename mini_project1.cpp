#include<iostream>
using namespace std;
int main()

{
    int option;
    double  deposite, withdrow , show_data , balance = 1000;
    do{
    
 
    cout<<"  1. deposite                   "<<endl;
    cout<<"  2. withdrow                   "<<endl;
    cout<<"  3. show data                  "<<endl;
    cout<<"  4. exit                       "<<endl;
    
    cout<<"enter the option :";
    cin>>option;
      switch(option)
      {
        case 1:
        cout<<"  enter the deposite : "<<endl;
        cin>>deposite;
        balance += deposite;
        cout<<" your new bwlwnce :"<<balance<<endl;
        break;

        case 2:
        cout<<" enter the withdrow amount : "<<endl;
        cin >>withdrow;
        if(balance<withdrow)
        {
            cout<<" sorray , enter the valid amount :";
        }
        else 
        {
            balance  -=  withdrow;
            cout<<" show new belence :"<<balance<<endl;
        }
        
        break;

        case 3:
        {
            cout<<"your belence  is :"<<balance<<endl <<endl;
             break;
        }
       default:
       cout<<"   EXIT ";
      }


    }
    while(option !=4);
    ("pause");
     return 0;

}
