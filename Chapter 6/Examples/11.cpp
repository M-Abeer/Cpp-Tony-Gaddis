// Exapmple 6.11
#include<iostream>
using namespace std;

void divide(double,double);


int main()
{
	double a,b;
	cout<<"ENter a And B"<<endl;
	cin>>a>>b;
	divide(a,b);
	
	// Program Terminate
	return 0;
}

void divide(double arg1, double arg2)
{
	if(arg2==0.0)
	{
		cout<<"Never be Zero"<<endl;
		return;
	}
	cout<<"Result is "<<(arg1/arg2)<<endl;
}
