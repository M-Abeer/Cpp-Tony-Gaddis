// 4.27
// Menu

#include<iostream>
using namespace std;
int main()
{
	int choice;
	int months;
	double charges;
	
	/// Constants
	const double ADULT=40.0,
			  	 SENIOR=30.0,
			  	 CHILD=20.0;
			  
			  
	// Constants 
	const int ADULT_CHOICE=1,
			  SENIOR_CHOICE=2,
			  CHILD_CHOICE=3,
			  QUIT=4;
			  
			  
			  
	// Display Menu
	
	cout<<endl;
	cout<<"\t\t\t\tHEALTH FITNESS CENTRE\n\n";
	cout<<"1. Adult Member"<<endl;
	cout<<"2. Senior Citizen"<<endl;
	cout<<"3. Child "<<endl;
	cout<<"4. Quit the Program"<<endl;
	cout<<"\n\n";
	// Enter Choice
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
	
	// Now use Switch Statement
	
	switch(choice)
	{
		case ADULT_CHOICE:
			cout<<"Enter Number of Months"<<endl;
			cin>>months;
			charges=ADULT*months;
			cout<<"Charges are "<<charges<<"$"<<endl;
			break;
			
		case SENIOR_CHOICE:
			cout<<"Enter Number of Months"<<endl;
			cin>>months;
			charges=SENIOR*months;
			cout<<"Charges are "<<charges<<"$"<<endl;
			break;
		case CHILD_CHOICE:
			cout<<"Enter Number of Months"<<endl;
			cin>>months;
			charges=CHILD*months;
			cout<<"Charges are "<<charges<<"$"<<endl;
			break;	
		case QUIT:
			cout<<"Quit the Program"<<endl;
			break;
		default:
			cout<<"You entered Wrong Input"<<endl;
			
	}
	// Program Terminate
	return 0;
}
