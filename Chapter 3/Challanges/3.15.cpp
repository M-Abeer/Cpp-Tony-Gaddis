//Property Tax

#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	double Actual_Price;
	double Assessment_Value;
	double Property_Tax;
	
	const double a=0.60;
	const double p=0.75;
	const double hundred=100;
	
	//Read Data from User
	cout<<"Enter Actual Price of Property"<<endl;
	cin>>Actual_Price;
	
	//Calculate Assessment Vslue
	Assessment_Value=Actual_Price*a;
	
	//Calculate Property Tax
	Property_Tax=(Assessment_Value/100)*p;
		
	//Display Report
	cout<<endl;
	cout<<"********************************************\n"<<endl;
	cout<<setprecision(2)<<right<<fixed<<endl;
	cout<<"Actual Price         $"<<setw(8)<<Actual_Price<<endl;
	cout<<"Assessment Value is  $"<<setw(8)<<Assessment_Value<<endl;
	cout<<"Property Tax is      $"<<setw(8)<<Property_Tax<<endl;
	//Terminate Program
	return 0;
}
