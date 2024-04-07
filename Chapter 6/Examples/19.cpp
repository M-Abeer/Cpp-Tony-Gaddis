// Example 6.19
#include<iostream>
using namespace std;
#include<iomanip>

// GLobal COnstants

const double PAY_RATE=22.55,  // Hourly Pay rate
			 BASE_HOURS=40.00, // MaxNon OverTime Hours
			 OT_MULTIPLIER=1.5; //Overtime Multiplier
			 
double getBasePay(double hours)
{
	double basepay;
	if(hours>BASE_HOURS)
	{
		basepay=BASE_HOURS*PAY_RATE;
	}
	else
	{
		basepay=hours*PAY_RATE;
	}
	return basepay;
}

double getOvertimePay(double hours)
{
	double over;
	if(hours>BASE_HOURS)
	{
		over=(hours-BASE_HOURS)*OT_MULTIPLIER*PAY_RATE;
	}
	else
	{
		over=0.0;
	}
	return over;
}

int main()
{
	double hours;
	double GrossPay,Base,Over;
	// Read Data from User
	cout<<"Enter Number of Hours"<<endl;
	cin>>hours;
	Base=getBasePay(hours);
	Over=getOvertimePay(hours);
	GrossPay=Base+Over;
	
	// Display The Report
	cout<<"Gross Pay is "<<GrossPay<<endl;
	
	// Program Terminate'
	return 0;
}
