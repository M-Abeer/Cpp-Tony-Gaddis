// Example 7.15
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int hours[5];
	double payRate[5];
	int  i;
	
	//
	for(i=0;i<5;i++)
	{
		cout<<"Enter Number of Hours worked by Employee "<<(i+1)<<endl;
		cin>>hours[i];
	}
	
	//
	for(i=0;i<5;i++)
	{
		cout<<"Enter PayRate of Employee "<<(i+1)<<endl;
		cin>>payRate[i];
	}
	//
	for(i=0;i<5;i++)
	{
		double grossPay;
		grossPay=hours[i]*payRate[i];
		cout<<"Gross Pay of Employee "<<(i+1)<<grossPay<<endl;
	}
	//
	return 0;
}
