// Example 11.9

#include<iostream>
using namespace std;
#include<iomanip>

enum Day{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main()
{
	/*
	Day today;
	today=Friday;
	cout<<today<<endl;*/
	
	int i;
	int Sales[7];
	for(i=Monday;i<=Sunday;i++)
	{
		cout<<"Enter Sales of Day "<<i+1<<endl;
		cin>>Sales[i];
	}
	
	// Calculations
	double Total=0;
	for(i=Monday;i<=Sunday;i++)
	{
		Total+=Sales[i];
	}
	
	// Display The Total
	cout<<fixed<<setprecision(2)<<showpoint;
	cout<<"Total is "<<Total<<endl;
	
	// Program Terminate
	return 0;
}


