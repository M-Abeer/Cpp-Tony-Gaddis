// Example 11.3
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct EmployeePay
{
	string name;
	int empnumber;
	double payrate;
	double hours;
	double grosspay;
};
int main()
{
	EmployeePay e1={"Abeer",1,18.75};
	EmployeePay e2={"Areeb",2,17.50};
	
	// Calculate Pay for Employee 1
	cout<<"Name:"<<e1.name<<endl;
	cout<<"Number :"<<e1.empnumber<<endl;
	cout<<"Payrate :"<<e1.payrate<<endl;
	cout<<"Enter Hours worked by this Employee "<<endl;
	cin>>e1.hours;
	e1.grosspay=e1.hours*e1.payrate;
	cout<<"Gross pay:"<<e1.grosspay<<endl;
	
	cout<<"\n\n\n";
	// Calculate Pay for Employee 2
	cout<<"Name:"<<e2.name<<endl;
	cout<<"Number :"<<e2.empnumber<<endl;
	cout<<"Payrate :"<<e2.payrate<<endl;
	cout<<"Enter Hours worked by this Employee "<<endl;
	cin>>e2.hours;
	e2.grosspay=e2.hours*e2.payrate;
	cout<<"Gross pay:"<<e2.grosspay<<endl;
	
	// Program Terminate
	return 0;	
}
