// Using Files--Hospital report



#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<fstream>

double InPatient(double, double, double, double);
double OutPatient(double, double);


int main()
{
	ofstream ofs;
	ofs.open("Hospital.txt");
	
	string service;
	cout<<"Enter CheckUp Type"<<endl;
	getline(cin,service);
	
	
	// InPatient
	int days;
	double dailyrate;
	double meditation;
	double hospitalservice;
	
	
	// ..................................
	
	
	// OutPatient
	double charges_hospitalservice;
	double meditation_charges;
	
	
	
	if(service=="InPatient")
	{
		// Read Data from User
	cout<<"Enter Number of days"<<endl;
	cin>>days;
	cout<<"Enter Daily rate"<<endl;
	cin>>dailyrate;
	cout<<"Enter Hospital Meditation Charges"<<endl;
	cin>>meditation;
	cout<<"Enter Charges for Hospital Services"<<endl;
	cin>>hospitalservice;
	double a;
			
	a=InPatient(days,dailyrate,meditation,hospitalservice);
	cout<<"Total Charges are "<<a<<"$"<<endl;
	ofs<<"\t\t\tHOSPITAL REPORT\n\n";
	ofs<<"Charges for InPatient are "<<a<<endl;
	}
	
	else if(service=="OutPatient")
	{
		cout<<"Enter Hospital Meditation Charges"<<endl;
		cin>>meditation;
		cout<<"Enter Charges for Hospital Services"<<endl;
		cin>>hospitalservice;
		double b;
		b=OutPatient(charges_hospitalservice,meditation_charges);
		cout<<"Total Charges are "<<b<<"$"<<endl;	
		ofs<<"Charges for OutPatient are "<<b<<endl;
	}
	else 
	{
		cout<<"Invalid Input"<<endl;
	}
	// Program Terminate
	return 0;
}

double InPatient(double arg1,double arg2, double arg3, double arg4)
{
	
	double Total_Charges;
	Total_Charges=arg1*arg2+arg3+arg4;
	return Total_Charges;
}

double OutPatient(double arg1,double arg2)
{
	double Total_Charges;
	Total_Charges=arg1+arg2;
	return Total_Charges;
}
