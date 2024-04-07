// Cp 6.10

#include<iostream>
using namespace std;
#include<iomanip>

void showDollars(double);  // function protoType

int main()
{
	double payRate,hoursWorked,wages;
	cout<<"How many Hours have you worked"<<endl;
	cin>>hoursWorked;
	cout<<"What is your Hourly pay rate?"<<endl;
	cin>>payRate;
	wages=payRate*hoursWorked;
	showDollars(wages);
	return 0;	
}

void showDollars(double a)
{
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Your Wages are "<<a<<"$"<<endl;
}

