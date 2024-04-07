// Example 6.29
#include<iostream>
using namespace std;
void function();

int main()
{
	function();
	//
	return 0;
}


void function()
{
	cout<<"This Program Termintes with the Exit Function"<<endl;
	cout<<"Bye!\n";
	exit(0);
	cout<<"This will not Dislayed"<<endl;
	cout<<"Bkz This Program has Already Termiated"<<endl;
}
