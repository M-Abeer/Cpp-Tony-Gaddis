// Change for Dollar Game
#include<iostream>
using namespace std;
int main()
{
	// Constant variables
    const float 
                PENNY      = 0.01,
                NICKEL     = 0.05,
                DIME       = 0.10,
                QUARTER    = 0.25;
	
	int pennies,
		nickels,
		dimes,
		quarters;
	
	int Total_Coins;	
	
	
	cout<<"Enter Pennies"<<endl;
	cin>>pennies;
	cout<<"Enter Nickels"<<endl;
	cin>>nickels;
	cout<<"Enter Dimes"<<endl;
	cin>>dimes;
	cout<<"Enter Quarters"<<endl;
	cin>>quarters;
	
	
	Total_Coins=(pennies*PENNY)+(dimes*DIME)+(nickels*NICKEL)+(quarters*QUARTER);
	
	if(Total_Coins==1)
	{
		cout<<"Congratulations!! You Won the Game"<<endl;
	}
	else if(Total_Coins>1)
	{
		cout<<"Amount entered was more than one Dollar"<<endl;
	}
	else if(Total_Coins<1)
	{
		cout<<"Amount entered was less than one Dollar"<<endl;
	}
	
	// Program Terminate
	return 0;
	
}
