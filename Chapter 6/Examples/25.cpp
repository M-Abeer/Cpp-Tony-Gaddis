// Exammple 6.25
#include<iostream>
using namespace std;

// Function ProtoType
void doubleNum(int &);
int main()
{
	int value=4;
	cout<<"In main, the value is "<<value<<endl;
	cout<<"Now calling Double Num"<<endl;
	doubleNum(value);
	cout<<"Now back in main, the value is "<<value<<endl;
	//Program terminate
	return 0;
}
void doubleNum(int &refVar)
{
	refVar*=2;
}
