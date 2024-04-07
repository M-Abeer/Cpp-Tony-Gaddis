// 4.17
#include<iostream>
using namespace std;
int main()
{
	// Constants
	const double MIN_INCOME=35000.0;
	const int MIN_YEARS=5;
	
	double Income;
	int Years;
	
	// Get the ANnual Income
	cout<<"What is your Annual Income"<<endl;
	cin>>Income;
	
	// Get the Number of Yesra at Currenr jOn
	cout<<"How many years you have been working on your current Job?"<<endl;
	cin>>Years;
	
	if(!(Income>=MIN_INCOME||Years>MIN_YEARS))
	{
		cout<<"You must earn at least "<<MIN_INCOME<<" and have have been Employee for more than "<<MIN_YEARS<<" Years"<<endl;
	}
	else
	{
		cout<<"You are Qualified"<<endl;
	}
	
	// Program Terminate
	return 0;
}
