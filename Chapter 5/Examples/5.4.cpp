// Example 5.4
#include<iostream>
using namespace std;
int main()
{
	float Temperature;
	
	cout<<"Enter the Substance Temperature"<<endl;
	cin>>Temperature;
	while(Temperature>102.5)
	{
		cout<<"Turn Down Thermostat"<<endl;
		cout<<"Wait 5 Minutes"<<endl;
		cout<<"Check the temperature again"<<endl;
		cout<<"Enter Temperature"<<endl;
		
		cin>>Temperature;
	}
	cout<<"temperature is Accepted"<<endl;
	cout<<"Check it after 15 Minutes"<<endl;
	return 0;
}
