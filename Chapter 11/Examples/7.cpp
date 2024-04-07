// Example 11.7
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;


struct Circle
{
	double radius;
	double diameter;
	double area;
};


Circle getinfo();   // Function ProtoType to Return Function

int main()
{
	Circle c;
	// Get Data about the Circle
	c=getinfo();
	
	// Calculate the Circle Area
	c.area=3.14*c.radius*c.radius;
	
	cout<<"Diameter is "<<c.diameter<<endl;
	cout<<"Radius is "<<c.radius<<endl;
	cout<<"Area is "<<c.area<<endl;
	
	// Progarm Terminate
	return 0;
}


Circle getinfo()
{
	Circle tempCircle;
	cout<<"Enter Diameter of Circle"<<endl;
	cin>>tempCircle.diameter;
	tempCircle.radius=tempCircle.diameter/2;
	return tempCircle;
}
