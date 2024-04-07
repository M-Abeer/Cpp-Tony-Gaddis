/// Markup

#include<iostream>
using namespace std;
#include<iomanip>

double calculateRetail(double, double);   // Function ProtoType

int main()
{
	double r,wholesale,markup;
	double markup_P;
	// Read Data from user
	cout<<"Enter Whole Sale Cost"<<endl;
	cin>>wholesale;
	cout<<"Enter its markup percentage"<<endl;
	cin>>markup;
	markup_P=markup/100;
	// Function Calling
	
	if(wholesale<0||markup_P<0)
	{
		cout<<"Both Values must be Positive"<<endl;
	}
	else
	{
		r=calculateRetail(wholesale,markup_P);  // Passing Arguments
		cout<<setprecision(2)<<fixed<<showpoint;
		cout<<"The Retail Price is "<<r<<endl;
	}
	// Program Terminate
	return 0;
}
double calculateRetail(double arg1,double arg2)  // Function Header
{
	double Retail;
	Retail=(arg1*arg2)+arg1;
	return Retail;
}
