// Example 2.23
#include<iostream>
using namespace std;
int main()
{
	
	int number;
	char ch;
	
	//Read Data from user
	cout<<"Enter a Number"<<endl;
	cin>>number;
	
	// Let suppose yoy enter 100 so it is stored in keyboard buffer as 100\n. It stopreading at zero.. So \n character is taken as 
	//   character. And it does not give user a optio to input characer. So we cin.ignore( ) function to skip the newline character
	cin.ignore();
	
	cout<<"Enter a Charracter "<<endl;
	//ch=cin.get();
	cin.get(ch);// In these three we use any method
	//cin.get();
	
	//Program Terminate
	return 0;
}
