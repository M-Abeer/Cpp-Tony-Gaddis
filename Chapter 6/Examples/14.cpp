// Small project
// Example 6.14

#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
#include<string>

//
void showIntro();
int getCups();
int cupsToOunces(int);

//
int main()
{
	int c,o;
	//
	showIntro();
	// Totally Display What the Program is
	
	c=getCups();
	o=cupsToOunces(c);
	cout<<"The "<<c<<" contains "<<o<<" Ounce Fluid"<<endl;
	
	// program terminate
	return 0;

}

void showIntro()
{
	cout<<"\t\t\tCatering Company"<<endl;
	cout<<endl;
	cout<<"This Software will convert Number of Cups to Ounces"<<endl;
}
int getCups()
{
	int cups;
	cout<<"Enter Number of Cups"<<endl;
	cin>>cups;
	return cups;
}
int cupsToOunces(int c)
{
	return c*8;
}
