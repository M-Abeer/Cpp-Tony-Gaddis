// Sales Tax
#include<iostream>
using namespace std;
int main()
{
	int Retail;
	float Sales_Tax;
	//Read Data from User
	cout<<"Enter Retail Price"<<endl;
	cin>>Retail;
	cout<<"Enter SAles Tax"<<endl;
	cin>>Sales_Tax;
	//Calculations
	float Tax;
	Tax=Retail*Sales_Tax;
	cout<<"Sales Tax for Purchase is "<<Tax<<endl;
	float Total;
	Total=Tax+Retail;
	cout<<"The Total of the Sales"<<Total<<endl;
	return 0;
}
