// Example 30
#include<iostream>
using namespace std;
#include<iomanip>
//ProtoType
void showFees(double, int);
int main()
{
	const double ADULT=40.0,
				 SENIOR=30.0,
				 CHILD=20.0;
				 
	// Perform a Test For Adult MemberShip
	cout<<"Testing an Adult membership"<<endl;
	cout<<"Calling the showFees function with Arguments"<<endl;
	showFees(ADULT,10);
	
	// Perform a Test For Senior MemberShip
	cout<<"Testing an Senior membership"<<endl;
	cout<<"Calling the showFees function with Arguments"<<endl;
	showFees(SENIOR,10);
	
	// Perform a Test For Child MemberShip
	cout<<"Testing an Child membership"<<endl;
	cout<<"Calling the showFees function with Arguments"<<endl;
	showFees(CHILD,10);
	
	// Program Terminate
	return 0; 
}

void showFees(double memberrate, int months)
{
	cout<<"Charges are "<<(memberrate*months)<<endl;
}


