// Example 11.1
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

struct PayRoll
{
	int empNumber;
	string name;
	double hours;
	double payRate;
	double grossPay;
};

int main()
{
	PayRoll employee;  // employee is a PayRoll Structure
	
	// Get the EMployee number
	cout<<"Enter Employee Number"<<endl;
	cin>>employee.empNumber;
	
	// Get the Employee Name
	cout<<"Enter Employee Name"<<endl;
	cin.ignore();
	getline(cin,employee.name);
	
	
	//Get the Hours worked by the Employee
	cout<<"Enter the Hours worked by the Employee"<<endl;
	cin>>employee.hours;
	
	// Get the Employee Hourly Pay rate
	cout<<"Enter the Employee Hourly Pay Rate"<<endl;
	cin>>employee.payRate;
	
	//Calculate the Employee Gross Pay
	employee.grossPay=employee.hours*employee.payRate;
	
	
	// Display the Employee Data
	cout<<"Here is the Employee Payroll Data"<<endl;
	cout<<"Name :"<<employee.name<<endl;
	cout<<"Number :"<<employee.empNumber<<endl;
	cout<<"Hours Worked :"<<employee.hours<<endl;
	cout<<"Hourly Pay Rate :"<<employee.payRate<<endl;
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Gross Pay: $"<<employee.grossPay<<endl;
	
	
	// Program terminate
	return 0;
	
}
