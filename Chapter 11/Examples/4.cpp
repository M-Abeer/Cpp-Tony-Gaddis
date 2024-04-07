// Example 11.4
#include<iostream>
#include<iomanip>
using namespace std;

struct PayInfo
{
	int hours;
	double payRate;
};
int main()
{
	PayInfo w[3];
	int i;
	
	// Get the Hours 
	for(i=0;i<3;i++)
	{
		cout<<"Enter Hours Worked by Employee #"<<(i+1)<<endl;
		cin>>w[i].hours;
	}
	
	// Get the payRate
	for(i=0;i<3;i++)
	{
		cout<<"Hourly Pay Rate "<<endl;
		cin>>w[i].payRate;
	}
	
	
	// Display Each Employee Gross Pay
	cout<<fixed<<showpoint<<setprecision(2);
	for(i=0;i<3;i++)
	{
		double gross;
		gross=w[i].hours*w[i].payRate;
		cout<<"Employee # "<<(i+1)<<gross<<endl;
	}
	
	//
	return 0;
	
}
