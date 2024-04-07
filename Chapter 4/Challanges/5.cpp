// Body Mass Index
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	// Variables
	double weight,
		   height,
		   BMI;
		   
	// Read data from Uset
	cout<<"Enter Weight in Pound"<<endl;
	cin>>weight;
	cout<<"Enter Height in Inches"<<endl;
	cin>>height;
	
	// calculations
	BMI=(weight*703)/pow(height,2.0);
	
	//
	if(BMI>=18.5&&BMI<=25)
	{
		cout<<"Person has Optimal Weight"<<endl;
	}
	else if(BMI<18.5)
	{
		cout<<"Person has UnderWeight"<<endl;
	}
	else if(BMI>25)
	{
		cout<<"Person is considered OverWeight"<<endl;
	}
	else
	{
		cout<<"Sorry!! Invalid Input"<<endl;
		cout<<"Try Again"<<endl;
	}
	
	// Program terminate
	return 0;
	
}
