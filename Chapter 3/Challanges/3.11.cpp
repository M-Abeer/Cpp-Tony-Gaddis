//Automobile Costs

#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	double Loan_Payment,Insurance,Gas,Oil,Tyre,Mantainance;
	double Total_Monthly;
	double Total_Annual;
	
	//Enter Monthly Cost of These Expenses
	cout<<"Enter Monthly Cost of Loan Payment "<<endl;
	cin>>Loan_Payment;
	cout<<"Enter Monthly Cost of Insurance"<<endl;
	cin>>Insurance;
	cout<<"Enter Monthly Cost of Gas"<<endl;
	cin>>Gas;
	cout<<"Enter Monthly Cost of Oil"<<endl;
	cin>>Oil;
	cout<<"Enter Monthly Cost of Tyres"<<endl;
	cin>>Tyre;
	cout<<"Enter Monthly Cost of Mantainance"<<endl;
	cin>>Mantainance;
	//Calculate Total Monthly Cost of these Expenses
	Total_Monthly=Loan_Payment+Insurance+Gas+Oil+Tyre+Mantainance;
	//Calculate Annual Expenses of Automobile
	Total_Annual=Total_Monthly*12;
	//Display The Report
	cout<<endl;
	cout<<"\n***************************************\n";
	cout<<"AutoMobile Costs"<<endl;
	cout<<setprecision(2)<<fixed<<right<<endl;
	cout<<"Total Monthly Cost of these Expenses are "<<setw(9)<<Total_Monthly<<endl;
	cout<<"Total Annual  Cost of these Expenses are "<<setw(9)<<Total_Annual<<endl;
	//Terminate Program
	return 0;
}
