// Box Office
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
int main()
{
	const double CHILD=6.00;
	const double ADULT=10.00;
	string name;
	int C_S;
	int A_S;
	double Gross_Box_Office_Profit; // Total
	double Net_Box_Office_Profit;
	double Amount_Paid_Distributor;
	double Adult,Child;
	
	// Read Data from User
	cout<<"Enter Name of Movie "<<endl;
	getline(cin,name);
	cout<<"Enter Number of CHild Tickets Sold"<<endl;
	cin>>C_S;
	cout<<"Enter Number of Adult Tickets Sold "<<endl;
	cin>>A_S;
	
	Adult=ADULT*A_S;
	Child=CHILD*C_S;
		
	Gross_Box_Office_Profit=Adult+Child;	
	Net_Box_Office_Profit=Gross_Box_Office_Profit*0.20;
	Amount_Paid_Distributor=Gross_Box_Office_Profit-Net_Box_Office_Profit;
	
	// Use formatting
	// Display the Report
	cout<<"Movie Name                  "<<name<<endl;
	cout<<"Child Tickets Sold          "<<C_S<<endl;
	cout<<"Adult Tickets Sold          "<<A_S<<endl;
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Gross Box Office Profit     "<<Gross_Box_Office_Profit<<endl;
	cout<<"Net Box Office Profit       "<<Net_Box_Office_Profit<<endl;
	cout<<"Amount Paid to Distributors "<<Amount_Paid_Distributor<<endl;
	
	// Program Terminate
	return 0;
}
