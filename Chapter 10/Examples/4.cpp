// Example 10.4
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char again;
	
	do
	{
		cout<<"C++ Programing is Graet Fun"<<endl;
		cout<<"Do you want to see the Message Again?"<<endl;
		cin>>again;
	}while(again=='Y'||again=='y');
	
	return 0;
}
