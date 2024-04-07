// Rectangle Area

#include<iostream>
using namespace std;
#include<iomanip>

double getLength()
{
	double length;
	// Read data from user
	cout<<"Enter Length"<<endl;
	cin>>length;
	return length;
}

double getWidth()
{
	double width;
	// Read data from user
	cout<<"Enter Width"<<endl;
	cin>>width;
	return width;
}

double getArea(double arg1,double arg2)
{
	double Area;
	Area=arg1*arg2;
	return Area;
}

void displayData(double arg1, double arg2, double arg3)
{
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Length of Rectangle is "<<arg1<<endl;
	cout<<"Width of Rectangle is "<<arg2<<endl;
	cout<<"Area of Rectangle is "<<arg3<<endl;
}

int main()
{
	
	double l,w,a;
	l=getLength();
	w=getWidth();
	a=getArea(l,w);
	
	displayData(l,w,a);
	
	//Program terminate
	return 0;
}
