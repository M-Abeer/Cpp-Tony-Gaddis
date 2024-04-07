// 4.28

#include<iostream>
using namespace std;
int main()
{
	//
	const double MIN_INCOME=35000.00;
	const int MIN_YEARS=5;
	
	cout<<"What is your Annual income?"<<endl;
	double income;
	cin>>income;
	
	cout<<"For how many years you are working for?"<<endl;
	int years;
	cin>>years;
	
	if(income>=MIN_INCOME||years>MIN_YEARS)
	{
		cout<<"You Qualify"<<endl;
	}
	else
	{
		cout<<"One COndition is necessary to Qualify"<<endl;
	}
	// Program Terminate
	return 0;
	
	
}
