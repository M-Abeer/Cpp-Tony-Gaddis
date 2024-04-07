//CP 4.14
#include<iostream>
using namespace std;
int main()
{
	double comission_rate,sales;
	cout<<"Enter Sales"<<endl;
	cin>>sales;
	if(sales >= 50000)
	{
		comission_rate=0.10;
		cout<<comission_rate<<endl;
	}
	else
	{
		comission_rate=0.20;
		cout<<comission_rate<<endl;
	}
	return 0;
}
