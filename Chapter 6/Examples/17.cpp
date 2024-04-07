// Example 6.17
#include<iostream>
using namespace std;
int num=2;  // Global Variable
void anotherFunction();
int main()
{
	cout<<"In main, number is "<<num<<endl;
	anotherFunction();
	cout<<"Number in main is "<<num<<endl;
	//
	return 0;
}

void anotherFunction()
{
	cout<<"Number in Another Function is "<<num<<endl;
	int num=10;
	cout<<"Number in another function is "<<num<<endl;
}

