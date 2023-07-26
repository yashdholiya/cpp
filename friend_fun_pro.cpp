#include<iostream>
using namespace std;
class largest{
    int x,y;
    public :
    void input()
    {
        cout<<"enter a value :";
        cin>>x;
        cout<<"enter b value :";
        cin>>y;
    }
    friend largest find(largest m);

};

largest find(largest m){
    if(m.x > m.y)
    {
        cout <<"largest number i s :"<<m.x;
    }
    else{
        cout<<"largest number is :"<<m.y;
    }
}
int main()
{
    largest m;
    m.input();
    find(m);
}