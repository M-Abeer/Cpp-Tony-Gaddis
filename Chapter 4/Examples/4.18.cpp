// 4.18
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	// Variables
	
	int choice,months;
	double charges;
	
	// Constants for Membership rate
	
	const double ADULT=40.0;
	const double SENIOR=30.0;
	const double CHILD=20.0;
	
	// Constnts for Choice Menu
	const int ADULT_CHOICE=1;
	const int SENIOR_CHOICE=2;
	const int CHILD_CHOICE=3;
	const int QUIT_CHOICE=4;
	
	// Display a Menu for a User
	cout<<"\t\tHealth Club Membership Menu\n\n";
	cout<<"1. Standard Adult MemberShip\n";
	cout<<"2. Senior Citizen Membership\n";
	cout<<"3. Child MemberShip\n";
	cout<<"4. Quit the Program\n\n";
	cout<<"Enter your Choice"<<endl;
	cin>>choice;
	
	if(choice==ADULT_CHOICE)
	{
		cout<<"For how many Months?"<<endl;
		cin>>months;
		charges=ADULT*months;
		cout<<"The Charges are "<<charges<<"$\n";
	}
	
	else if(choice==SENIOR_CHOICE)
	{
		cout<<"For how many Months?"<<endl;
		cin>>months;
		charges=SENIOR*months;
		cout<<"The Charges are "<<charges<<"$\n";
	}
	
	else if(choice==CHILD_CHOICE)
	{
		cout<<"For how many Months?"<<endl;
		cin>>months;
		charges=CHILD*months;
		cout<<"The Charges are "<<charges<<"$\n";
	}
	else if(choice==QUIT_CHOICE)
	{
		cout<<"Program Close"<<endl;
	}
	else
	{
		cout<<" Sorry!! Invalid Input"<<endl;
	}
	
	// Program terminate
	return 0;
}
