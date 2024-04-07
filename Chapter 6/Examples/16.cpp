// Example 6.16
#include<iostream>
using namespace std;
void anotherfunction()
{
	int num=20;
	cout<<"Num is "<<num<<endl;
}
int main()
{
	int num; // Local Variable and accessible only in main Block
	num=10;
	cout<<"In main, number is "<<num<<endl;
	anotherfunction();
	cout<<"Again in main, num is "<<num<<endl;
	// Program Terminate
	return 0;
}
