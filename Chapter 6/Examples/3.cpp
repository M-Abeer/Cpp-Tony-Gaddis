// Example 6.3
#include<iostream>
using namespace std;

void first()
{
	cout<<"I am in Function 1"<<endl;
}

void second()
{
	cout<<"I am in Function 2"<<endl;
}

int main()
{
	//
	cout<<"I am in Main Function"<<endl;
	first();
	second();
	cout<<"Return Back to Main"<<endl;
	//Program Terminstre
	return 0;
}
