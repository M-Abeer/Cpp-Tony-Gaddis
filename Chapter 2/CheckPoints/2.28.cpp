// Named Constants
#include<iostream>
using namespace std;
int main()
{
	const double PI=3.14159;
	int circumference;
	int r;
	
	//Read Data from user
	cout<<"Enter Radius"<<endl;
	cin>>r;
	
	//Calculate Circumference
	circumference=2*PI*r;
	cout<<"Circumference is "<<circumference<<endl;
	
	//Program Terminate
	return 0;
}
