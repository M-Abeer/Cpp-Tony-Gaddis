// 25
#include<iostream>
using namespace std;
int main()
{
	// Variables
	float max;
	float used;
	float avaiable;
	
	// Read Data from User
	cout<<"Enter Maximum amount of Credit"<<endl;
	cin>>max;
	cout<<"Enter amount of Creadit Used"<<endl;
	cin>>used;
	
	//Calculations
	avaiable=max-used;
	
	//Display Report
	cout<<"Customer's avaiable creadit is "<<avaiable	<<endl;
	
	//Program Terminate
	return 0;
}
