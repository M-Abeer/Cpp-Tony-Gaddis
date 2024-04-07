// Example 10.3
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	const double PI=3.14159;
	double radius,area;
	char ch;  // to hold Y and N
	
	do
	{
		cout<<"ENter Radius of Circle"<<endl;
		cin>>radius;
		area=PI*radius*radius;
		
		cout<<"The Area of Circle is "<<area<<endl;
		
		// Now Again
		
		cout<<"Would you Want to Check Again"<<endl;
		cin>>ch;
		// Validate the Input
		while(toupper(ch)!='Y'&&toupper(ch)!='N')
		{
			cout<<"Enter Again "<<endl;
			cin>>ch;
		}
		
		
		
		
	}while(ch=='Y');
	
	
	
	// Program terminate
	return 0;
}
