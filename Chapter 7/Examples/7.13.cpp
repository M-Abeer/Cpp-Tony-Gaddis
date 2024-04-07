// Example 7.13
#include<iostream>
using namespace std;
int main()
{
	int hours[12];// 12 Employees
	double payRate,grossPay;
	
	// Enter hour worked by 12 Emplotyees
	int i;
	for(i=0;i<12;i++)
	{
		cout<<"Enter Hours worked by Employee "<<(i+1)<<endl;
		cin>>hours[i];
	}
	// payRate
	cout<<"Enter Pay rate of all Employees "<<endl;
	cin>>payRate;
	
	//
	for(i=0;i<12;i++)
	{
		grossPay=hours[i]*payRate;
		cout<<"Gross Pay of Employee "<<(i+1)<<" is "<<grossPay<<endl;
	}
	// Program Terminate
	return 0;
	
}

