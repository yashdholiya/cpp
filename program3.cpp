#include<iostream>
using namespace std;
class Test{                                     // class create 
    int testCode, noCandidate, centerReqd;      //   private : part 
    char description[30];
    int calcent(){
        return (noCandidate/100+1);             
    }
    public:                                     //   public : part 
    void schedual(){
        cout<<"Enter Test Code : ";
        cin>>testCode;
        cout<<"Description : ";
        cin>>description;
        cout<<"No. Of Candidate : ";
        cin>>noCandidate;
        centerReqd = calcent();
    }
    void disptest(){
        cout<<"Test Code is : "<<testCode<<endl;
        cout<<"Description : "<<description<<endl;
        cout<<"All Candidate : "<<noCandidate<<endl;
        cout<<"Center Required : "<<centerReqd;
    }
};
int main(){
    Test a;   
    a.schedual();
    a.disptest();
}


/*3. Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
2
CPP Practice Programm Skill Qode
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members
*/