#include<iostream>
using namespace std;
class hello{
    int n;
    public:

 void setn()
 {
    cout<<"enter n";
    cin>>n;

 }
 void getn()
 {
    cout<<"enter n "<<n<<endl;


 }
};


int main()
{
    hello a[5];
    int i;
    for(i=0; i<2; i++)
    {
        a[i].setn();
    }
      for(i=0; i<2; i++)
    {
        a[i].getn();
    }


}
