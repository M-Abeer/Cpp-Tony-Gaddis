// 3.28 Case Study Example 3.28
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	// Constants
	const double COST_PER_CUBIC_FOOT=0.23;
	const double CHARGER_PER_CUBIC_FOOT=0.50;
	
	// Variables
	// Input from User
	double length, //Ask user for length
		   width,	//Ask user for Width
		   height;	//Ask user for Height
		   
	// Variables
	// To Calculate
	double cost,	//Calculate Cost of Crate
		   charge,	//Calculate Customer Charge for Crate
		   volume,
		   profit;	//Calculate Profit
		   
	// Set the desired output Format
	cout<<setprecision(2)<<fixed<<showpoint;
	
	// Prompt the User to Enter Length, Width, Height
	cout<<"Enter the Dimensions of Crate in Feet"<<endl;
	cout<<"Enter length"<<endl;
	cin>>length;
	cout<<"Enter Width"<<endl;
	cin>>width;
	cout<<"Enter Height"<<endl;
	cin>>height;
	
	// Calculate the Crate Volume,   Cost , Charges to Customers and Profit
	volume=length*width*height;
	cost=volume*COST_PER_CUBIC_FOOT;
	charge=volume*CHARGER_PER_CUBIC_FOOT;
	profit=charge-cost;
	
	// Display the Calculated Data
	cout<<"The Volume of Crate is "<<volume<<" cubic feet "<<endl;
	cout<<"Cost of Crate is "<<cost<<" $"<<endl;
	cout<<"Charge for Customer is "<<charge<<" $"<<endl;
	cout<<"Profit is "<<profit<<" $"<<endl;
	
	//Program Terminate
	return 0;
	
	
	
		   
}
