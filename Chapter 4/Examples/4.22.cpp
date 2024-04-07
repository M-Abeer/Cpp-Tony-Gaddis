// 4.22
#include<iostream>
using namespace std;
int main()
{
	const double PAY_RATE=50.0;
	const int MIN_HOURS=5;
	
	double hours,charges;
	
	// Read Hours
	cout<<"How many Hours were Worked?"<<endl;
	cin>>hours;
	
	hours=hours<MIN_HOURS ?MIN_HOURS: hours;
	
	charges=hours*PAY_RATE;
	
	cout<<" The Charges are "<<charges<<"$"<<endl;
	
	// Program Terminate
	return 0;
}
