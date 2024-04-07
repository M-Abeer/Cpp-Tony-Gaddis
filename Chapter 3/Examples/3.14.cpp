// Example 3.14
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
int main()
{
	int intvalue=3928;
	double doublevalue=91.5;
	string stringvalue=" Muhammad Abeer";
	cout<<"("<<setw(5)<<intvalue<<")"<<endl;
	cout<<"("<<setw(8)<<doublevalue<<")"<<endl;
	cout<<"("<<setw(16)<<stringvalue<<")"<<endl;
	//Program terminate
	return 0;
}
