#include<iostream>
using namespace std;
class batsman
{


private :
int bcode,innings,notout,run;
char bname[20];
float calcavg;
float batavg()
 {
  batavg = run/(innings-notout);
 }
  public:
  readdata()
  {
    cout<<" enter bcode";
    cin>>bcode;
    cout<<" enter bname";
    cin>>bname;
    cout<<" enter innings";
    cin>>innings;
    cout<<" enter notout";
    cin>>notout;
  }
  calcavg()
  {
 batavg = run/(innings-notout);
  }
  displaydata()
  {
      cout<<" bcode"<<bcode<<endl;
      cout<<"bname" <<bname<<endl;
      cout<<"innings"<<innings<<endl;
      cout<<"notout"<<notout<<endl;

  }
};


int main()
{
    batsman c;


}


