// 4.24

#include<iostream>
using namespace std;
int main()
{
	char choice;
	
	cout<<"ENter A B and C"<<endl;
	cin>>choice;
	
	// UseSwitch Statement
	switch(choice)
	{
		case 'A':
			cout<<" You Entered A"<<endl;
//			break;
		case 'B':
			cout<<"You Entered B"<<endl;
//			break;
		case 'C':
			cout<<"You Entered C"<<endl;
//			break;
		default:
			cout<<"You donot enter A B C"<<endl;
	}
	// Program Terminate
	return 0;
}
