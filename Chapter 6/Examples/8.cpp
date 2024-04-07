// Exsmple 6.8
#include<iostream>
using namespace std;

void function1(int, int, int);

int main()
{
	int value1,value2,value3;
	
	// Read data From User
	cout<<"Enter Value 1 Value 2 Value 3"<<endl;
	cin>>value1>>value2>>value3;
	
	function1(value1, value2, value3);
	
	// Program Terminate
	return 0;
}

void function1(int num1, int num2, int num3)
{
	cout<<"The Sum is "<<(num1+num2+num3)<<endl;
}
