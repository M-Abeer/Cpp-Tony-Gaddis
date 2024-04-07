// Largest and Lowest Array Values
#include<iostream>
using namespace std;

int main()
{
	// Variable declaration
	
	int array[10];
	int i;
	int low;
	int high;
	
	
	// Read data from User
	cout<<"Enter Array Element"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Enter Element #"<<(i+1)<<endl;
		cin>>array[i];
	}
	// We can also Use Function to Get data
	
	
	// Now
	low=array[0];
	for(i=0;i<10;i++)
	{
		if(array[i]<low)
			low=array[i];
	}
	
	
	// Now
	high=array[0];
	for(i=0;i<10;i++)
	{
		if(array[i]>high)
			high=array[i];
	}
	
	// Display The Report
	
	cout<<endl;
	cout<<"Lowest element is "<<low<<endl;
	cout<<"Highest element is "<<high<<endl;
	
	// Program TGerminate
	return 0;
	
}
