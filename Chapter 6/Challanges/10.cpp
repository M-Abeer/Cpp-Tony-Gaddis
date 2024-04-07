// Future Value
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
double futureValue(double arg1,double arg2,double arg3)
{
	double F;
	F=arg1*(pow((1+arg2),arg3));
	return F;
}



int main()
{
	double Present,Rate,Months,a;
	//
	cout<<"Enter Account's present Value"<<endl;
	cin>>Present;
	cout<<"Enter Monthly Interest Rate"<<endl;
	cin>>Rate;
	cout<<"Enter Number of Months"<<endl;
	cin>>Months;
	a=futureValue(Present,Rate,Months);
	cout<<"Account Future Value is "<<a<<endl;
	// Program Terminate
	return 0;
}
