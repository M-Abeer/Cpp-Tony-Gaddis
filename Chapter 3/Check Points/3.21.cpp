// CP 3.21
#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	double angle1,angle2;
	double x,y,z;
	
	// Read Data from User
	cout<<"Enter angle 1"<<endl;
	cin>>angle1;
	cout<<"Enter angle 2"<<endl;
	cin>>angle2;
	
	y=sin(angle1);
	z=cos(angle2);
	
	x=y+z;
	cout<<"\n******\n";
	cout<<"REsult is "<<x<<endl;
	
	//Program terminate
	return 0;
	
}
