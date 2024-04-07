// Population

#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
double Population(double,double,double);
int main()
{
	//
	double Starting,
		   Birth,
	   	   Death,
	   	   Years;
	double a;
		
	// Read Data from User
	cout<<"Enter Starting Size of Population"<<endl;
	cin>>Starting;
	cout<<"Enter Annual Birth Rate"<<endl;
	cin>>Birth;
	cout<<"Enter Annual Death Rate"<<endl;
	cin>>Death;
	cout<<"Enter Number of Years"<<endl;
	cin>>Years;
	double Birth_Rate,Death_Rate;
	Birth_Rate=Birth*0.01;
	Death_Rate=Death*0.01;
	
	a=Population(Starting,Birth_Rate,Death_Rate);
	double Size;
	Size=a*Years;
	cout<<"Size of Population for "<<Years<<" Years is "<<Size<<endl;
	
	// Program terminate
	return 0;
}



double Population(double arg,double arg1,double arg2)
{
	return arg+(arg1*arg)-(arg2*arg);
}

