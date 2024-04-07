// Example 7.8
// No Bounds Checking in C++
#include<iostream>
using namespace std;
int main()
{
	int number[3];
	// Read Data from User
	for(int i=0;i<5;i++)  // No Bounds Check in C++
	{
		cout<<"Enter Element #"<<(i+1)<<endl;
		number[i]=100;
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<number[i]<<endl;	
	}
	
	// Program Terminate
	return 0;
}
