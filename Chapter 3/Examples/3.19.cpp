// Example 3.19
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string name,city;
	//Read Data from user
	cout<<"Please enter your name"<<endl;
	getline(cin,name);
	cout<<"Enter the city you live in "<<endl;
	getline(cin,city);
	
	cout<<"Hello! "<<name<<endl;
	cout<<"You Live in "<<city<<endl;
	
	//Program Terminate
	return 0;
	
}
