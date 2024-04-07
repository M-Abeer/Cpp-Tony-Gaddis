// Example 7.1
#include<iostream>
using namespace std;
int main()
{
	int hours[6];// Declaration
	// Read Data from User
	cout<<"Enter number of Hours Worked by employees"<<endl;
	cin>>hours[0];
	cin>>hours[1];
	cin>>hours[2];
	cin>>hours[3];
	cin>>hours[4]; // Read as Employee sub 4..
	cin>>hours[5]; // 5 is subscript..
	
	// Display The OutPut
	cout<<"The Hours You Entered"<<endl;
	
	cout<<hours[0]<<endl;
	cout<<hours[1]<<endl;
	cout<<hours[2]<<endl;
	cout<<hours[3]<<endl;
	cout<<hours[4]<<endl;
	cout<<hours[5]<<endl;
	
	// Program Terminate
	return 0;	
	
}
