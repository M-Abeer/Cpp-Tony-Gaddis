// Example 6.28
#include<iostream>
using namespace std;
#include<iomanip>

void getchoice(char &);
double calWeeklyPay(int ,double);
double calWeeklyPay(double);    // Function OverLoaidng occur coz of diffeent Data Types and different Parameters


int main()
{
	char selection;
	int hours;
	double payRate;
	double AnnualPay;
	
	
	// Display Menu
	cout<<"\t\t\tDo you want to calculate the weekly pay of an hourly paid employee";
	cout<<" Or YOu want to calculate the Weekly Pay of Salaried Employees"<<endl;
	
	getchoice(selection);
	
	
	switch(selection)
	{
		
	
	case 'H':
	case 'h':
	{
		double a;
		cout<<"For How many Hours You are working?"<<endl;
		cin>>hours;
		cout<<"Enter Your Payrate per Hour?"<<endl;
		cin>>payRate;
		a=calWeeklyPay(hours,payRate);
		cout<<"Weekly Pay Rate for Hourly Paid Employee is "<<a<<endl;		
		break;
	}
	
	case 'S':
	case 's':
	{
		double b;
		cout<<"What is your Annual pay rate"<<endl;
		cin>>AnnualPay;
		b=calWeeklyPay(AnnualPay);
		cout<<"Weekly Pay Rate of Salaried Employee"<<b<<endl;
		break;
	}
	
	
	}
	
	return 0;
}

void getchoice(char & letter)
{
	cout<<"Enter a Letter"<<endl;
	cin>>letter;
	while(letter!='H'&&letter!='h'&&letter!='S'&&letter!='s')
	{
		cout<<"Enter a Letter Again"<<endl;
		cin>>letter;		
	}
}


double calWeeklyPay(int hours, double payRate)
{
	return hours*payRate;
}

double calWeeklyPay(double annualSalary)
{
	return annualSalary/52;
}

