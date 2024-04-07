// Present Value
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>


double presentValue(double arg1, double arg2, double arg3)
{
	double Present;
	Present=arg1/(pow((1+arg2),arg3));
	return Present;
}
int main()
{
	double Future,Rate,Years;
	cout<<"Future Value is "<<endl;
	cin>>Future;
	cout<<"Annual Interest rate is "<<endl;
	cin>>Rate;
	cout<<"Number of Years is "<<endl;
	cin>>Years;
	
	double P;
	P=presentValue(Future,Rate,Years);
	cout<<showpoint<<setprecision(2)<<fixed<<endl;
	cout<<"Present Value is "<<P<<endl;
	// Program terminate
	return 0;
}
