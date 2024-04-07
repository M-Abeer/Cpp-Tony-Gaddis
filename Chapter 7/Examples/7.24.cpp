// Example 7.24

#include<iostream>
using namespace std;
#include<vector>
#include<iomanip>

int main()
{
	const int NUM_EMPLOYEES=5;  // Number of Employees
	vector<int> hours(NUM_EMPLOYEES);  // A vector of integer
	vector<double>payRate(NUM_EMPLOYEES); // A vector of double
	
	// Input the data
	cout<<"Enter the Hours Worked by "<<NUM_EMPLOYEES<<" employees and their Hourly Rate"<<endl;
	for(int i=0;i<NUM_EMPLOYEES;i++)
	{
		cout<<"Hours worked by Employee #"<<(i+1)<<" :";
		cin>>hours[i];
		cout<<"Hourly Pay Rate for Employee #"<<(i+1)<<" :";
		cin>>payRate[i];
	}
	
	// Display Each Employee Gross Pay
	cout<<"\nHere is the Gross Pay for each Employee"<<endl;
	cout<<fixed<<showpoint<<setprecision(2);
	
	for(int i=0;i<NUM_EMPLOYEES;i++)
	{
		double grossPay=hours[i]*payRate[i];
		cout<<"Employee #"<<(i+1)<<" :  $"<<grossPay<<endl;
	}
	// Program Terminate
	return 0;
}
