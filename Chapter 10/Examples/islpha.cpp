//Character Testing Function in C++

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch='1';
	// Use isalpha Function
	// To check whether it is Alphabet or Niot
	if(isalpha(ch))
	{
		cout<<"Yes it is Alphabate"<<endl;
	}
	else
	{
		cout<<"It is Not a Alphabat"<<endl;
	}
	
	//
	return 0;
}
