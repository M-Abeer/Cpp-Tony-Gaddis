// Paint Job Estimator
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>


int main()
{
	// Wall Space=110 sqf
	// Paint=1 Gallon
	// Labor= 8 Hours
	// Charges=25$ per Hour
	
	
	// Wall Space =1 sqf
	// Paint=0.009 Gallon
	// Labor= 0.0727 Hours
	// Charges=0.2272$ per Hour
	
	
	int Rooms;
	double PriceofPaint;
	double sqf_each_room=0;
	
	// 1
	// Read Data from User
	cout<<"Enter Number of Rooms"<<endl;
	cin>>Rooms;
	
	for(int i=0;i<Rooms;i++)
	{
		cout<<"Enter Sqaure Feet for "<<(i+1)<<" room"<<endl;
		cin>>sqf_each_room;
	}
	sqf_each_room+=sqf_each_room;
	
	cout<<"Enter Price of Paint per Gallon"<<endl;
	cin>>PriceofPaint;
	
	
	
	
	
	
	// 2
	// Calculation and Display
	cout<<setprecision(2)<<fixed<<showpoint;
	double a,b,c,d,e;
	a=round(sqf_each_room*0.009);   // Round function is used to round off
	cout<<"Number of Gallons of Paint Required "<<a<<endl;
	b=sqf_each_room*0.0727;
	cout<<"Hours of Labour Required"<<b<<endl;
	// Cost of Paint
	c=b*PriceofPaint;
	cout<<"Price of Paint is "<<c<<endl;
	// Labour Charges
	d=sqf_each_room*0.2272;
	cout<<"The Labour Charges are "<<d<<endl;
	cout<<"Total Cost of Job Paint "<<a+b+c+d<<endl;
	
	
	// Program Termiinate
	return 0;
}
