#include<iostream>
using namespace std;

int main()
{
	int a,n,p,c,c_p,d=0,c1,p1,w=0;
	char na[25];
	
	cout<<"1. Saving accout";
	cout<<"\n2. Current accout";
	cout<<"\nEnter Your Choice :";
	cin>>c;
	if(c==1){
		ONE:
		cout<<"\nEnter Your Amount :";
		cin>>a;
			if(a<=7000){
				cout<<"\n\tYour Saving Accout Balance :"<<a;
			}else{
				goto ONE;
			}
		TWO:
		cout<<"\nEnter Your Accout Number :";
		cin>>n;
			if(n>=1000 && n<10000){
				cout<<"\n\tAccout Number :"<<n;
			}else {
				goto TWO;
			}
		cout<<"\nEnter Your Name :";
		cin>>na;
		cout<<"\n\t Name :"<<na;
		cout<<"\n Balance :"<<a;
		T:
		cout<<"\nEnter Pin :";
		cin>>p;
			if(p>=100 && p<1000){
				Four:
				cout<<"Enter Conform Pin :";
				cin>>c_p;
				if(p==c_p){
					cout<<"\n\n-------YOUR ACCOUT IS OPEN------";
				}else{
					goto Four;
				}
			}else{
				goto T;
			}
		cout<<"\n 1.Show Accout";
		cout<<"\n 2.Deposit";
		cout<<"\n 3.Withdraw";
		cout<<"\n 4.Change Pin";
		cout<<"\n 5.Exit";
		S:
		cout<<"\n Enter Your Choice :";
		cin>>c1;
			if(c1==1){
				cout<<"---Show Accout---";
				F:
				cout<<"\nEnter Your Pin :";
				cin>>p1;
				if(p1==p){
					cout<<"\n Name :"<<na;
					cout<<"\n Accout Number :"<<n;
					cout<<"\n Accout Types : Saving";
					cout<<"\n Balance :"<<a-(d+w);
					goto S;
				}else{
					goto F;
				}
			}else if(c1==2){
				p1=0;
				cout<<"---Deposit---";
				Fl:
				cout<<"\nEnter Your Pin :";
				cin>>p1;
				if(p1==p){
					D:
					cout<<"Enter Deposit Amout:";
					cin>>d;
					if(d>=3000 && d<a){
						cout<<"Succssfully Deposit Your Accout";
						goto S;
					}else {
					 goto D;
					}
				}else{
					goto Fl;
				}
			}else if(c1==3){
					p1=0;
					cout<<"---Withdraw---";
					J:
					cout<<"\n Enter Your Pin :";
					cin>>p1;
					if(p1==p){
						G:
						cout<<"Enter Withdraw Amout :";
						cin>>w;
						if(w>=1000 && w<a){
							cout<<"Succssfully Withdraw Your Accout";
							goto S;
						}else {
							goto G;
						}
					}else{
						goto J;
					}
			}else if(c1==4){
					p1=0;
					cout<<"---Change Pin---";
					A:
					cout<<"\nEnter Your Pin :";
					cin>>p1;
					if(p1==p){
						p=0;
						c_p=0;
						cout<<"Enter Your New Pin :";
						cin>>p;
						L:
						cout<<"Enter Your Conform Pin :";
						cin>>c_p;
						if(c_p==p){
							cout<<"Succssfully Change Your Pin";
							goto S;
						}else{
							goto L;
						}
					}else {
						goto A;
					}
			}else{
					cout<<"--------Exit--------";
					cout<<"\n--Thank You--";
			}
	}else{
		O:
		cout<<"\nEnter Your Amount :";
		cin>>a;
			if(a<=7000){
				cout<<"\n\tYour Saving Accout Balance :"<<a;
			}else{
				goto O;
			}
		W:
		cout<<"\nEnter Your Accout Number :";
		cin>>n;
			if(n>=1000 && n<10000){
				cout<<"\n\tAccout Number :"<<n;
			}else {
				goto W;
			}
		cout<<"\nEnter Your Name :";
		gets(na);
		cout<<"\n\t Name :"<<na;
		cout<<"\n Balance :"<<a;
		R:
		cout<<"\nEnter Pin :";
		cin>>p;
			if(p>=100 && p<1000){
				U:
				cout<<"Enter Conform Pin :";
				cin>>c_p;
				if(p==c_p){
					cout<<"\n\n-------YOUR ACCOUT IS OPEN------";
				}else{
					goto U;
				}
			}else{
				goto R;
			}
		cout<<"\n 1.Show Accout";
		cout<<"\n 2.Deposit";
		cout<<"\n 3.Withdraw";
		cout<<"\n 4.Change Pin";
		cout<<"\n 5.Exit";
		K:
		cout<<"\n Enter Your Choice :";
		cin>>c1;
			if(c1==1){
				cout<<"---Show Accout---";
				C:
				cout<<"\nEnter Your Pin :";
				cin>>p1;
				if(p1==p){
					cout<<"\n Name :"<<na;
					cout<<"\n Accout Number :"<<n;
					cout<<"\n Accout Types : Saving";
					cout<<"\n Balance :"<<a-(d+w);
					goto K;
				}else{
					goto C;
				}
			}else if(c1==2){
				p1=0;
				cout<<"---Deposit---";
				M:
				cout<<"\nEnter Your Pin :";
				cin>>p1;
				if(p1==p){
					Q:
					cout<<"Enter Deposit Amout:";
					cin>>d;
					if(d>=3000 && d<a){
						cout<<"Succssfully Deposit Your Accout";
						goto K;
					}else {
					 goto Q;
					}
				}else{
					goto M;
				}
			}else if(c1==3){
					p1=0;
					cout<<"---Withdraw---";
					H:
					cout<<"\n Enter Your Pin :";
					cin>>p1;
					if(p1==p){
						E:
						cout<<"Enter Withdraw Amout :";
						cin>>w;
						if(w>=1000 && w<a){
							cout<<"Succssfully Withdraw Your Accout";
							goto K;
						}else {
							goto E;
						}
					}else{
						goto H;
					}
			}else if(c1==4){
					p1=0;
					cout<<"---Change Pin---";
					B:
					cout<<"\nEnter Your Pin :";
					cin>>p1;
					if(p1==p){
						p=0;
						c_p=0;
						cout<<"Enter Your New Pin :";
						cin>>p;
						I:
						cout<<"Enter Your Conform Pin :";
						cin>>c_p;
						if(c_p==p){
							cout<<"Succssfully Change Your Pin";
							goto K;
						}else{
							goto I;
						}
					}else {
						goto B;
					}
			}else{
					cout<<"--------Exit--------";
					cout<<"\n--Thank You--";
			}


	}

}
