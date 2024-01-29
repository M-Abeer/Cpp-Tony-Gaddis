//Sales tax
#include<iostream>
using namespace std;
int main()
{
	int Purchase=95;
	double State=0.04;
	double Country=0.02;
	// State Sale Tax is
	cout<<"State Sales Tax is "<<Purchase*State<<"\n";
	//Country Sales Tax
	cout<<"Country Sales Tax is "<<Purchase*Country;
	//Total Sales Tax
	//Add them
	return 0;
}
