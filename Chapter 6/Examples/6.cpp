// Exapmple 6.6
#include<iostream>
using namespace std;

/*

void function1(int num)
{
	cout<<"The Number is "<<num<<endl;
}


int main()
{
	cout<<"I am in Main Function"<<endl;
	function1(5);
	cout<<"Agin in Main"<<endl;
	
	// Program Terminate
	return 0;
}

*/

void function1(int);
int main()
{
	cout<<"I am in Main Function"<<endl;
	function1(5);
	cout<<"Agin in Main"<<endl;
	
	// Program Terminate
	return 0;
}


void function1(int num)
{
	cout<<"The Number is "<<num<<endl;
}

