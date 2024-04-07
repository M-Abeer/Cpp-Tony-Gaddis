// Example 6.13
#include<iostream>
using namespace std;

float square(float);
float getRadius();

int main()
{
	const float PI=3.14159;
	double Area;
	float s,radius;
	
	radius=getRadius();
	
	s=square(radius);
	
	Area=PI*s;
	cout<<"Area is "<<Area<<endl;
	// Program Terminate
	return 0;	
}
float getRadius()
{
	float radius;
	cout<<"Enter Radius"<<endl;
	cin>>radius;
	return radius;
}
float square(float radius)
{
	return radius*radius;
}

