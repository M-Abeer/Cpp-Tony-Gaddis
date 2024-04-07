// Example 7.21

#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	const int NUM_DIVS=3;
	const int NUM_QTRS=4;
	// Array
	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales=0;
	int div,qtr;
	
	// Read Data from User
	cout<<"Enter Following Sales Information"<<endl;
	// Use Nested Loop
	for(div=0;div<NUM_DIVS;div++)
	{
		for(qtr=0;qtr<NUM_QTRS;qtr++)
		{
			cout<<"Division "<<(div+1)<<", Quarter "<<(qtr+1)<<" : $";
			cin>>sales[div][qtr];
		}
	}
	cout<<endl;
	
	// Nested Loop again To Calculate Total Sales
	
	for(div=0;div<NUM_DIVS;div++)
	{
		for(qtr=0;qtr<NUM_QTRS;qtr++)
		{
			totalSales+=sales[div][qtr];
		}
	}
	
	// Display Format
	cout<<fixed<<setprecision(2)<<showpoint<<endl;
	
	// Display The OutPut
	
	cout<<"The Total Sales for a Company are "<<totalSales<<endl;
	// Program Terminate
	return 0;
}
