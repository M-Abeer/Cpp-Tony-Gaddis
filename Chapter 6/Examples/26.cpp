// Example 6.26
#include<iostream>
using namespace std;
void doubleNum(int &);
void getNum(int &);

int main()
{
	int value;
	// Get the nUmber from User and store it in value
	getNum(value);
	
	// Double the Number stored in value
	doubleNum(value);
	// Display the Resulting Number
	cout<<"Double Number is "<<value<<endl;
	// Program terminate
	return 0;
}
void getNum(int &user)
{
	cout<<"Enter a Number"<<endl;
	cin>>user;
}
void doubleNum(int &refVar)
{
	refVar*=2;
}
