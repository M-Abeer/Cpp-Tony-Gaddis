// Book Club Points
#include<iostream>
using namespace std;
int main()
{
	// Variable Definition
	int books;
	int points;
	
	// Read data from User
	cout<<"Enter Number of Books"<<endl;
	cin>>books;
	
	if(books==0)
	{
		points=0;
		cout<<"Points are "<<points<<endl;
	}
	
	else if(books==1)
	{
		points=5;
		cout<<"Points are "<<points<<endl;
	}
	
	else if(books==2)
	{
		points=15;
		cout<<"Points are "<<points<<endl;
	}
	
	else if(books==3)
	{
		points=30;
		cout<<"Points are "<<points<<endl;
	}
	
	else if(books==4)
	{
		points=60;
		cout<<"Points are "<<points<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	// Program Terminate
	return 0;
		
}
