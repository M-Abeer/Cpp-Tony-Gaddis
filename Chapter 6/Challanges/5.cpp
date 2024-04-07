// Falling Distance

#include<iostream>
using namespace std;
#include<iomanip>

int fallingDistance(double arg)
{
	const float g=9.8f;
	double d;
	d=0.5*g*arg*arg;
	return d;
}

int main()
{
	int time;
	double a;
	cout<<"Enter Time in Seconds"<<endl;
	cin>>time;
	
	for (int i=1;i<=time;i++)
	{
		a=fallingDistance(i);
		cout<<setprecision(2)<<fixed<<showpoint<<endl;
		cout<<"The Distance is "<<a<<endl;
	}
	
	// Program terminate
	return 0;

}
