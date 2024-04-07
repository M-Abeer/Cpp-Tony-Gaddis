// EXample 7.27
#include<iostream>
using namespace std;
#include<vector>
#include<iomanip>

int main()
{
	vector<int> hours;
	vector<double>payRate;
	int Employees;
	int i;
	
	// Enter Number of Employees
	cout<<"Enter Number of Employees"<<endl;
	cin>>Employees;
	
	// Input the payRoll data
	//cout<<"Enter the Hours Worked By "<<Employees<<endl;
	for(i=0;i<Employees;i++)
	{
		int tempHours;
		double tempRate;
		//
		cout<<"HoursWorked by the Emoloyee"<<(i+1)<<" :";
		cin>>tempHours;
		hours.push_back(tempHours);
		
		cout<<"Hourly Pay Rate for Employee "<<(i+1)<<" :";
		cin>>tempRate;
		payRate.push_back(tempRate);
	}
	
	// Display Each Employee Gross Pay
	cout<<fixed<<setprecision(2)<<showpoint;
	//
	cout<<"Here is a Gross Pay for each Employee"<<endl;
	for(i=0;i<Employees;i++)
	{
		double grossPay=hours[i]*payRate[i];
		cout<<"Employee #"<<(i+1)<<grossPay<<endl;
	}
	// Program terminate
	return 0;
}

