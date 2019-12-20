#include<iostream>
using namespace std;
main(){
	int n;
	float a,b,c,d,e,f;
	cout<<"\nEnter account number (or -1 to quit): ";
	cin>>a;
	while(a != -1)
	{
		cout<<"Enter the beginning balance: ";
		cin>>b;
		cout<<"Enter the total charges: ";
		cin>>c;
		cout<<"Enter the total credits: ";
		cin>>d;
		cout<<"Enter the credit limit: ";
		cin>>e;
		f=(b+c)-d;
		
		cout<<"\nNew balance is "<<f<<"\n";
	
		if(f>5500){
				cout<<"Account: "<<a<<"\n";
		cout<<"Credit limit: "<<e<<"\n";
		cout<<"Balance: "<<f<<"\n";
			cout<<"Credit limit exceded !"<<"\n";
		}
		cout<<"\nEnter account number (or -1 to quit): ";
		cin>>a;
	}
}
