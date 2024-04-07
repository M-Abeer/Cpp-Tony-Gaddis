//Currency Exchange
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	double US_Dollar;
	double YEN_PER_DOLLAR;
	double EUROS_PER_DOLLAR;
	
	const double y=98.93;
	const double e=0.74;
	//1 dollar=98.93 Yen
	//1 dollar=0.74 Euro
	//Enter Data from user
	cout<<"Enter US Dollars"<<endl;
	cin>>US_Dollar;
	//Conver US Dollar to Yens
	YEN_PER_DOLLAR=US_Dollar*y;
	//Convert US Dollar to Euros
	EUROS_PER_DOLLAR=US_Dollar*e;
	//Display Report
	cout<<"\n*********************************\n";
	cout<<"Curreny Exchange"<<endl;
	cout<<setprecision(2)<<fixed<<right<<endl;
	cout<<"Yens Per Dollar are:"<<YEN_PER_DOLLAR<<endl;
	cout<<"Euros Per Dollar are:"<<EUROS_PER_DOLLAR<<endl;
	cout<<"\n*********************************\n";
	//Terminate Prgram
	return 0;
}
