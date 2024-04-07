// Example 11.2
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>

const int PI=3.14159;
struct Circle
{
	double radius;
	double diameter;
	double area;
};

int main()
{
	Circle c; //c is structire of Circle
	// Get the Circle Diameter
	cout<<"Enter Diameter of Circle"<<endl;
	cin>>c.diameter;
	
	
	// Now Radius Time
	c.radius=(c.diameter/2);
	
	
	// Calculate the Area of Circle
	c.area=PI*pow(c.radius,2);
	
	
	// Display the Report
	//cout<<fixed<<showpoint<<setprecision(2);
	cout<<"The Diameter of Circle is "<<c.diameter<<endl;
	cout<<"The radius of Circle is "<<c.radius<<endl;
	cout<<"The Area of Circle is "<<c.area<<endl;
	
	// Program Terminate
	return 0;
	
}
