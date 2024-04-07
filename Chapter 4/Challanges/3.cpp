// Magic Dates
#include<iostream>
using namespace std;
int main()
{
	// Variable Definition
	int days,
		months,
		years;
	
	// Get Data from User
	cout<<"Enter Days"<<endl;
	cin>>days;
	cout<<"Enter Months"<<endl;
	cin>>months;
	cout<<"Enter Years"<<endl;
	cin>>years;
	
	// 6/10/60 is Magic Date
	if(days*months==years)
	{
		cout<<"Date is Magic"<<endl;
	}
	else
	{
		cout<<"Date is Not Magic"<<endl;
	}
	// Program terminate
	return 0;	
}
