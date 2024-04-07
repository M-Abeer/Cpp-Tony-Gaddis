// Example 10
#include<iostream>
using namespace std;

void ShowMenu()
{
	cout<<"\t\t\tHEALTH CLUB MEMBERSHIP\n\n";
	cout<<"1. Standard Adult MemberShip"<<endl;
	cout<<"2. Child MemberShup"<<endl;
	cout<<"3. Senior Citizen MemberShip"<<endl;
	cout<<"4. Quit the Program"<<endl;
	
	cout<<"Enter your Choice"<<endl;
}

void ShowFee(double memberrate, int months)
{
	cout<<"Fee is "<<(memberrate*months)<<endl;	
}

int main()
{
	int choice,months;
	const int ADULT_C=1,
			  CHILD_C=2,
			  SENIOR_C=3,
			  QUIT=4;
			  
	const double ADULT=40,
				 CHILD=20,
				 SENIOR=30;
				 
				 
	ShowMenu();
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Enter Months"<<endl;
		cin>>months;
		ShowFee(ADULT,months);
	}
	else if(choice==2)
	{
		cout<<"Enter Months"<<endl;
		cin>>months;
		ShowFee(CHILD,months);
		
	}
	else if(choice==3)
	{
		cout<<"Enter Months"<<endl;
		cin>>months;
		ShowFee(SENIOR,months);
	}
	else if(choice==4)
	{
		cout<<"Quit Program"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	
	//
	return 0;	  
				
}
