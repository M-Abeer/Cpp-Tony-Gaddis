// 4.16
#include<iostream>
using namespace std;
int main()
{
	// Constants
	const double MIN_INCOME=35000.0;
	const int MIN_YEARS=5;
	
	//
	double Income;
	int Years;
	
	// Get the Annual Income
	cout<<"What is your Annual Income?"<<endl;
	cin>>Income;
	
	//Get the number of years at the current job
	cout<<"How many years have you worked at current job?"<<endl;
	cin>>Years;
	
	if(Income>=MIN_INCOME||Years>MIN_YEARS)
	{
		cout<<"You Qualify"<<endl;
	}
	else
	{
		cout<<"You must have earn atleast $"<<MIN_INCOME<<" or have been employed more then "<<MIN_YEARS<<" years.\n";
	}
	
	// Program Terminate
	return 0;
}
