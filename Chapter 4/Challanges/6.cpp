// Mass and Weight
#include<iostream>
using namespace std;
int main()
{
	// Variables
	float mass,Weight;
	
	// Read Data from user
	cout<<"Enter Mass"<<endl;
	cin>>mass;
	
	// calculations
	Weight=mass*9.8;
	
	// Use if Statement
	if(Weight>10000)
	{
		cout<<"Too Heavy"<<endl;
	}
	else if(Weight<10)
	{
		cout<<"Too Light"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		cout<<"Try Again"<<endl;
	}
	
	// Program terminate
	return 0;
}
