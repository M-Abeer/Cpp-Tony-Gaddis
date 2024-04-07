// Celcius Temperature Table
#include<iostream>
using namespace std;
#include<iomanip>

double celcius(double arg)
{
	double C;
	C=0.556*(arg-32);
	return C;
}

int main()
{
	double a;
	for(int i=0;i<=20;i++)
	{
		a=celcius(i);
		cout<<setprecision(2)<<fixed<<showpoint<<endl;
		cout<<i<<"Farhenheit is equal to "<<a<<" celcius.";
	}
	
	// Program Terminate
	return 0;
}
