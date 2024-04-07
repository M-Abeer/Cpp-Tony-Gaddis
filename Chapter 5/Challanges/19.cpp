// Budget Analysis
#include<iostream>
using namespace std;
int main()
{
	double TotalBudget;
	double Total=0;
	double Expenses;
	int i;
	int TotalExpenses;
	
	//
	cout<<"Enter Total Budget"<<endl;
	cin>>TotalBudget;
	cout<<"Total Number of Expenses"<<endl;
	cin>>TotalExpenses;
	
	
	for(i=0;i<TotalExpenses;i++)
	{
		cout<<"Enter Expense "<<(i+1)<<endl;
		cin>>Expenses;
		Total+=Expenses;
	}
	
	
	if(Total>TotalBudget)
	{
		cout<<"Over Budget"<<endl;
	}
	else if(Total<TotalBudget)
	{
		cout<<"Under Budget"<<endl;
	}
	else
	{
		cout<<"Balanced"<<endl;
		cout<<"Equal"<<endl;
	}
	
	// Program terminate
	return 0;
}
