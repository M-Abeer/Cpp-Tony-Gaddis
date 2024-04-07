// Angle calculator
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
int main()
{
	// Variable
	double angle;
	double x,y,z;
	
	// Read data from suer
	cout<<"Enter angle in Radian"<<endl;
	cin>>angle;
	x=sin(angle);
	y=cos(angle);
	z=tan(angle);
	
	// Output Format
	cout<<setprecision(4)<<fixed<<endl;
	
	// Display report
	cout<<"Sin of Angle "<<x<<endl;
	cout<<"Cos of angle "<<y<<endl;
	cout<<"Tan of angle "<<z<<endl;
	
	//Program Terminate
	return 0;
}
