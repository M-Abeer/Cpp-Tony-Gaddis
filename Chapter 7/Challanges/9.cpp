// PayRoll
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	int empId[7]={ 5658845, 4520125, 7895122, 8777541,
				   8451277, 1302850, 7580489 };
	
	int hours[7];
	double payRate[7];
	double wages[7];
	
	int i;
	for(i=0;i<7;i++)
	{
		cout<<"Employee #"<<(i+1)<<" ID is "<<empId[i]<<endl;
		cout<<"Enter Hours Worked by Employee "<<(i+1)<<endl;
		cin>>hours[i];
		cout<<"Enter PayRate of Employee "<<(i+1)<<endl;
		cin>>payRate[i];
		// Now Calculations
		wages[i]=hours[i]*payRate[i];
	}	
	
	// Display the Report
	for(i=0;i<7;i++)
	{
		cout<<"Employee #"<<i+1<<" Id is "<<empId[i]<<endl;
		cout<<"Wages of Employee "<<(i+1)<<" is "<<wages[i]<<endl;	
	}
	
	// Program terminaet
	return 0;
}
