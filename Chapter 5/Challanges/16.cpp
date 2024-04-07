// SAving Account Balance
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>


int main()
{
	double Start;
	double AnnualInterest;    //1500 and it become 15 percent For EXample
	int Deposit=0,WithDrawl=0;
	int deposit,withdrawl;
	double Months;
	double Interest;
	double TotalInterest=0;
	
	cout<<"Enter Annual Interest rate "<<endl;
	cin>>AnnualInterest;
	AnnualInterest*=0.01;
	cout<<"Enter Starting Balance "<<endl;
	cin>>Start;
	cout<<"Enter Number of months"<<endl;
	cin>>Months;
	
	
	double MonthlyInterest;
	int i;
	
	for(i=0;i<Months;i++)
	{
		cout<<"Amount Deposit in Month "<<(i+1)<<endl;
		cin>>deposit;
		while(deposit<0)
		{
			cout<<"Error"<<endl;
			continue;
		}
		Deposit+=deposit;
		
		cout<<"Amount WithDrawl in Month "<<(i+1)<<endl;
		cin>>withdrawl;
		WithDrawl+=withdrawl;
		
	}
	
	double a=Deposit-WithDrawl;
	Start+=a;
	
	MonthlyInterest=AnnualInterest/12;
	Interest=Start*MonthlyInterest;
	Start+=Interest;
	
	TotalInterest+=Interest;
	
	if(Start<0)
	{
	
        cout << "I'm sorry, your account has been closed\n"; 
        cout << "due to having a negative balance." << endl;
	}
	else
	{
		cout<<"Ending Balance :"<<Start<<endl;
		cout<<"Total Amount of Deposit :"<<Deposit<<endl;
		cout<<"Total Amount of WithDrawl :"<<WithDrawl<<endl;
		cout<<"Total Interest Rate :"<<TotalInterest<<endl;
	}	
	//Program terminate
	return 0;
	
}
