// 4.20s
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	// 
	cout<<"Enter a Character"<<endl;
	cin>>ch;
	
	if(ch>='A'&&ch<='Z')
	{
		cout<<"You entered a Capital Letter"<<endl;
	}
	else if(ch>='a'&&ch<='z')
	{
		cout<<"You entered a small Letter"<<endl;
	}
	else if(ch>='0'&&ch<='9')
	{
		cout<<"You enter a Digit"<<endl;
	}
	else 
	{
		cout<<"Inavlid Input"<<endl;
	}
	
	// Program Terminate
	return 0;
}
