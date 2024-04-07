// Predict the Output 
// Question 37
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	long seconds;
	double minutes,hours,days,years,months;
	
	cout<<"enter Seconds"<<endl;
	cin>>seconds;
	
	// Logic
	minutes=seconds/60;
	hours=minutes/60;
	days=hours/24;
	years=days/365;
	months=years*12;
	
	cout<<setprecision(4)<<fixed<<showpoint<<right<<endl;
	cout<<right<<endl;
	cout<<"Minutes:  "<<setw(6)<<minutes<<endl;
	cout<<"Hours:  "<<setw(6)<<hours<<endl;
	cout<<"Days:  "<<setw(6)<<days<<endl;
	cout<<"Months  "<<setw(6)<<months<<endl;
	cout<<"Years:  "<<setw(6)<<years<<endl;
	
	//Program Terminate
	return 0;
}
