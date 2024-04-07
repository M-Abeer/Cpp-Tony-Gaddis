// Account Balance
#include<iostream>
using namespace std;
int main()
{
	int Start;
	int Total;
	int Deposit;
	int Withdrawl;
	float Interest;
	float Current;
	//Read Data
	cout<<"Enter Starting Balance,\nDeposit,\nWithDrwal\n";
	cin>>Start>>Deposit>>Withdrawl;
	cout<<"Enter Interest"<<endl;
	cin>>Interest;
	Total=Start+Deposit-Withdrawl;
	Current=Total-Interest;
	cout<<"Current Balance is "<<Current<<endl;
	return 0;
}
