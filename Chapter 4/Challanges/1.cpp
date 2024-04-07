// Minimum / Maximum
#include<iostream>
using namespace std;
int main()
{
	// Variable Definition
	int num1,
		num2,
		high;
	
	// Read data from User
	cout<<"Enter Number 1"<<endl;
	cin>>num1;
	cout<<"Enter Number 2"<<endl;
	cin>>num2;
	
	// Use Conditional Operator
	high=(num1>num2)? num1: num2;
	
	// Display Output
	cout<<"The Highest Number is "<<high<<endl;
	
	// Program Terminate
	return 0;
	
}
