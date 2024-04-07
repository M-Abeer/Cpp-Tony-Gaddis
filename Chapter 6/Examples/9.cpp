// Example 6.9
#include<iostream>
using namespace std;

void changeMe(int);

int main()
{
	int number=12;
	
	cout<<"The  Number is "<<number<<endl;
	
	changeMe(number);
	
	
	cout<<"Now back to main, The value of Number is "<<number<<endl;
}

void changeMe(int value)
{
	value=0;
	cout<<"Now the Value is "<<value<<endl;
}
