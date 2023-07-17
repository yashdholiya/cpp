#include<iostream>
using namespace std;
class km  
{

    private:

    int flightnumber;
    int destination;
    float distance;
    float fuel;

    void ALFUELC()
    {
        if(0<=1000)
        {
            cout<<"fuel "<<fuel<<500;
        }

        else if (1000 <= 2000)
        {
            cout<<"fuel"<<fuel<<1100;
    
        }
        else
        {
            cout<<"fuel"<<fuel<<2200;
        }

        }

        public:

        void  FEEDINFO (){
            cout<<"enter the flight number"<<flightnumber<<endl;
            cin>>flightnumber;
            cout<<"enter the destination"<<destination<<endl;
            cin>>destination;
            cout<<"distance"<<distance<<endl;
            cin>>distance;
             
             void CALFUEL();
              {
                
             }


        }
    }
};


int main()
{
km f;
f.FEEDINFO ();
};