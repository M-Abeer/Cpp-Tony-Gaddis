// Example 7.2
#include<iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES=6;
	int hours[NUM_EMPLOYEES];
	int count;
	
	// Input the Hours Worked
	for(count=0;count<NUM_EMPLOYEES;count++)
	{
		cout<<"Enter the Number of Hours Worked by Employee "<<(count+1)<<endl;
		cin>>hours[count];
	}
	
	// Display the Contents of the array
	cout<<"The Hours you Entered are :\n";
	for(count=0;count<NUM_EMPLOYEES;count++)
	{
		cout<<hours[count]<<endl;
	}
	// Program Terminate
	return 0;
}
