// Example 4.10
#include<iostream>
using namespace std;
int main()
{
	char employee,
		 Recent_Graduated;
		 
	cout<<"Please Enter Yes or No"<<endl;
	cout<<"Is it employee?"<<endl;
	cin>>employee;
	cout<<"Is he be Reently Graduated"<<endl;
	cin>>Recent_Graduated;
	
	// Use Nested if
	if(employee=='Y')
	{
		if(Recent_Graduated=='Y')
		{
			cout<<"You Are Eligible"<<endl;
			cout<<"Congratulations"<<endl;
		}
	}
	
	// Program Terminate
	return 0;
}
