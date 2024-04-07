// Rainfall Statistics
#include<iostream>
using namespace std;
#include<iomanip>


int main()
{
	// Contanst
	const int month=12;
	// Variables
	double array[month];
	int i;
	double total=0;
	double average;
	double low,high;
	
	
	cout<<setprecision(2)<<fixed<<showpoint<<endl;
	string a[month]={"January","February","March","April","May","June",
				     "July","August","September","October","November","December"};
	int Month;				 
					 
	
	// Read data from User
	// Enter Rainfall for each month
	for(i=0;i<month;i++)
	{
		cout<<"Enter rainfall of Month #"<<(i+1)<<endl;
		cin>>array[i];
		total+=array[i];
	}
		cout<<"Total rainfall for thr Year "<<total<<endl;
	
	// Calculate Average
	average=total/month;
	
	cout<<"Average Monthly Rainfall "<<average<<endl;
	
	
	
	// Calculate Month with Highest Rainfall
	int loc;
	high=array[0];
	for(i=0;i<month;i++)
	{
		if(array[i]>high)
		{
			high=array[i];
			loc=i;
		}
	}
	cout<<"Month with highest amount is "<<a[loc]<<endl;
	
	// Calculate Month with Lowest Rainfall
	int loc2;
	low=array[0];
	for(i=0;i<month;i++)
	{	
		if(array[i]<low)
		{
			low=array[i];
			loc2=i;
		}
	}
	
		cout<<"Month with Lowest amount "<<a[loc2]<<endl;

	
	cout<<"-----------"<<endl;
	// Program Terminate
	return 0;
	
}
