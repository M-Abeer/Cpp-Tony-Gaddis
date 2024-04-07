// CP 4.10
#include<iostream>
using namespace std;
int main()
{
	int variablesales;
	float comissionRate;
	int bonus;
	
	//Read data
	cout<<"Enter Variale Sale"<<endl;
	cin>>variablesales;
	
	if(variablesales>50000)
	{
		comissionRate=0.25;
		bonus=250;
		cout<<variablesales<<"\t"<<comissionRate<<"\t"<<bonus<<endl;
	}
	
	// Program terminate
	return 0;
}
