// fmod (x,z)
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	double x,y,z;
	cout<<"Enter x and z"<<endl;
	cin>>x>>z;
	
	// use fmod function
	y=fmod(x,z);
	cout<<"mod is "<<y<<endl;
	
	// Program Terminate
	return 0;
}
