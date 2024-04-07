// Time calculator
#include<iostream>
using namespace std;
int main()
{
	int Seconds;
	float minutes,hours,days;
	
	// get Data from user
	cout<<"Enter Number of Seconds"<<endl;
	cin>>Seconds;
	
	if(Seconds>=60&&Seconds<3600)
	{
		minutes=Seconds*1.0f/60;
		cout<<"Minutes are "<<minutes<<endl;
	}
	else if(Seconds>=3600&&Seconds<86400)
	{
		hours=Seconds*1.0f/3600;
		cout<<"Hours are "<<hours<<endl;
	}
	else if(Seconds>=86400)
	{
		days=Seconds*1.0f/86400;
		cout<<"Days are "<<days<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	// Program terminate
	return 0;
}
