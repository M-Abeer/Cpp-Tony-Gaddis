//SetPrecision
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double a=132.364, b=26.91, quotient;
	quotient=a/b;
	cout<<quotient<<endl;
	cout<<setprecision(6)<<quotient<<endl;
	cout<<setprecision(5)<<quotient<<endl;
	cout<<setprecision(4)<<quotient<<endl;
	cout<<setprecision(3)<<quotient<<endl;
	cout<<setprecision(2)<<quotient<<endl;
	cout<<setprecision(1)<<quotient<<endl;
	return 0;
	
}
