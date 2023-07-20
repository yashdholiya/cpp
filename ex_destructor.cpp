#include<iostream>
using namespace std;

class test{
    public:

    test()  // defult constuctor
    {
        cout<<" test called...... :"<<endl;
    }

    ~test()  // destructor      sihg (~) sigh name " tild"
    {
        cout<<" teat called ..... :"<<endl;
    }
};

int main()
{
    test t;
}