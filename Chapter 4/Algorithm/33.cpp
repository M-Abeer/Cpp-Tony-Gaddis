//Algo 33
#include<iostream>
using namespace std;
int main()
{
	int Sales;
	double Comission;
	//Get Data from User
	cout<<"Enter Sales"<<endl;
	cin>>Sales;
	
	if(Sales<10000)
	{
		Comission=0.10;
		cout<<Comission<<endl;
	}
	else if(Sales>=10000&&Sales<=15000)
	{
		Comission=0.15;
		cout<<Comission<<endl;
	}
	else if(Sales>15000)
	{
		Comission=0.20;
		cout<<Comission<<endl;
	}
	
	//
	return 0;
}
