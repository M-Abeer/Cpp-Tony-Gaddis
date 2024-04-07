// Example 4.11
#include<iostream>
using namespace std;
int main()
{
	char employee,
		 recent_graduated;
		 
	cout<<"Please Enter Yes or No"<<endl;
	cout<<"Is it employee?"<<endl;
	cin>>employee;
	cout<<"Is he be Reently Graduated"<<endl;
	cin>>recent_graduated;
	
	// Use Nested if
	if(employee=='Y')
	{
		if(recent_graduated=='Y')
		{
			cout<<"You Are Eligible"<<endl;
			cout<<"Congratulations"<<endl;
		}
		else
		{
			cout<<"You must have recently Graduated to get this Access"<<endl;
			cout<<"ThankYou"<<endl;
		}
	}
	else
	{
		cout<<"For this, You must have employee and recently Graduated"<<endl;
	}
	// Program Terminate
	return 0;
}
