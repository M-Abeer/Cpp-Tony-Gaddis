// 4.29
#include<iostream>
using namespace std;
int main()
{
	const double MIN_INCOME=35000.0;
	const int MIN_YEARS=5;
	
	// Get the Annual Income
	cout<<"What is your Annual Income?"<<endl;
	double income;
	cin>>income;
	if(income>=MIN_INCOME)
	{
		cout<<"For How many Years you are Workig for This Organization?"<<endl;
		int years;
		cin>>years;
		
		if(years>MIN_YEARS)
		{
			cout<<"You Qualify"<<endl;
		}
		else
		{
			cout<<"You must have been for Employee for more than "<<MIN_YEARS<<" years."<<endl;
		}
	
	}
	
	//
	return 0;
}
