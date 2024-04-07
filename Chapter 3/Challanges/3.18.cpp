//Interest Earned
#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>

int main()
{
	double Interest_Rate;
	
	int Time_Compounded;
	double Principle;
	double Interest;
	double Amount;
	//Read Data from User
	cout<<"Enter Principle Balance in Saving Account"<<endl;
	cin>>Principle;
	cout<<"Enter Interest Rate"<<endl;
	cin>>Interest_Rate;
	cout<<"Number of Time interest is Compounded"<<endl;
	cin>>Time_Compounded;
	//Now Calculate the Required Things
	Interest_Rate/=100;
	Amount=Principle*pow((1+Interest_Rate/Time_Compounded),Time_Compounded);
	//Now Calculate Interest
	Interest=Amount-Principle;
	Interest_Rate*=100;
	//Calculations Done
	
	//Display Report
	cout<<endl;
	cout<<"\n**************************\n";
	cout<<setprecision(2)<<fixed<< right <<endl;
	cout<<"Interest Rate:          "<<setw(10)<<Interest_Rate<<"%"<<endl;
	cout<<"Time Compounded:        "<<setw(10)<<Time_Compounded<<endl;
	cout<<"Principle:              $"<<setw(10)<<Principle<<endl;
	cout<<"Interest:               $"<<setw(10)<<Interest<<endl;
	cout<<"Amount In Savings       $"<<setw(10)<<Amount<<endl;
	cout<<"\n**************************\n";
	//Program Terminate
	return 0;
	
}
