// Bank Charges

#include<iostream>
using namespace std;
int main()
{
	// Constants
	const int CHARGES_M=10;
	int Checks,Fee;
	float Balance,Charges=0,Total_Charges;
	
	// Read Data from User
	cout<<"Enter Beginning Balance"<<endl;
	cin>>Balance;
	cout<<"Enter Number of Checks "<<endl;
	cin>>Checks;
	
	if(Balance>0)
	{
		if(Balance<400)
		{
			Charges=Charges+15;
			cout<<"Balance is less than 400"<<endl;
		}
	}
    if(Balance <0)
	{
		cout<<"Your Account is OverDrwan"<<endl;
	}	
	
	if(Checks>0)
	{
		if(Checks<20)
		{
			Fee=0.10*Checks;
		}
		else if(Checks>=20&&Checks<=39)
		{
			Fee=0.08*Checks;
		}
		else if(Checks>=40&&Checks<=59)
		{
			Fee=0.06*Checks;
		}
		else if(Checks>=60)
		{
			Fee=0.04*Checks;
		}
		
		//
		Total_Charges=Charges+CHARGES_M+Fee;
		//
		cout<<"Bank Service fee for a Month is "<<Total_Charges<<endl;	
	}
	else
	{
		cout<<"Negative Value Not Allowed"<<endl;
	}
	
	// Display
	
	// Program Terminate
	return 0;
	
	
}
