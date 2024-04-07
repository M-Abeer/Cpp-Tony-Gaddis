// Example 5.21

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs;
	ofs.open("Sales.txt");
	
	/// Get Data from User
	int numDays;
	cout<<"Enter Number of Days"<<endl;
	cin>>numDays;
	
	int i,Sales;
	for(i=0;i<numDays;i++)
	{
		cout<<"Enter Sales of day "<<i+1<<endl;
		cin>>Sales;
		
		// Write data on File
		ofs<<Sales<<endl;
	}
	
	ofs.close();
	
	// Proggram terminate
	return 0;
	
}
