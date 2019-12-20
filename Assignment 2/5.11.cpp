#include<iostream>
using namespace std;
int main()
{
	int a,b,small;
	cout<<"Enter Two Number: ";
	cin>>a;
	cin>>b;
	if(a>b)
	{
		small=b;
	}
	else
	{
		small=a;
	}
	cout<<"Smallest Number is: "<<small<<"\n";
}
