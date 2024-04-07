// Example 6.27
// Function OverLoading
#include<iostream>
using namespace std;
#include<iomanip>

int square(int);
double square(double);

int main()
{
	int userint;
	double userfloat;
	
	// Read Data from User
	cout<<"Enter The Integer"<<endl;
	cin>>userint;
	cout<<"Enter The Floating Point Number"<<endl;
	cin>>userfloat;
	
	// Dispay The Report
	cout<<setprecision(2)<<fixed<<showpoint<<endl;
	cout<<"Here are there Squares"<<endl;
	cout<<square(userint)<<"\t\t"<<square(userfloat)<<endl;
	
	// Program Terminate
	return 0;
}

int square(int arg)
{
	return arg*arg;
}

double square(double arg)
{
	return arg*arg;
}
