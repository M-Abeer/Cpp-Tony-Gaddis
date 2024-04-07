// Example 6.2
#include<iostream>
using namespace std;

void dispMessage()
{
	cout<<"Hello from Display Message Function"<<endl;
}

int main()
{
	//
	cout<<"Main Function Starts"<<endl;
	
	for(int count=0;count<5;count++)
	{
		dispMessage();         // Call DispMessage Function
	}
	//
	cout<<"Reurn to Main Function"<<endl;
	
	//
	return 0;
}
