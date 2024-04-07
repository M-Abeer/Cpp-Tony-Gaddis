// 4.15
#include<iostream>
using namespace std;
int main()
{
	char employee,
		 recent_graduated;
		 
	// Read Data
	cout<<"Answer the following questions wuth Yes (Y) or No (N)"<<endl;
	cout<<"Are you Employee?"<<endl;
	cin>>employee;
	cout<<"Are you Recently Graduated?"<<endl;
	cin>>recent_graduated;
	
	if(employee=='Y'&&recent_graduated=='Y')
	{
		cout<<"You are Qualify for special Ineterst Rate"<<endl;
	}
	else
	{
		cout<<"Sorry!! You are not Eligible"<<endl;
	}
	
	// Program terminate
	return 0;
}
