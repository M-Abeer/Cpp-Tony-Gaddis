// CP 3.10
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	double volume;
	const float PI=3.14159f;
	float radius,height;
	cout<<"Enter Radius"<<endl;
	cin>>radius;
	cout<<"Enter Height"<<endl;
	cin>>height;
	volume=PI*pow(radius,2.0)*height;
	cout<<"Volume of Cylinder is "<<volume<<endl;
	//Program Terminate
	return 0;
	
}
