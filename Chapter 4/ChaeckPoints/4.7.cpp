// Cp 4.7
#include<iostream>
using namespace std;
int main()
{
	float payRate;
	int Hours;
	
	//Read data 
	cout<<"Enter Hours and Payrate"<<endl;
	cin>>Hours>>payRate;
	
	if(Hours>40)
	{
		payRate*=1.5;
		cout<<Hours<<"\t"<<payRate<<endl;
	}
	// Program Terminate
	return 0;
}
