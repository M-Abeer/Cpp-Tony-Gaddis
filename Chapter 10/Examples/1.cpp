// Example 1
#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	char ch;
	cout<<"ENter a Character "<<endl;
	cin.get(ch);
	if(isalpha(ch))
	{
		cout<<"it is a Alphabet Chacter"<<endl;
	}
	if(isdigit(ch))
	{
		cout<<"It is Digit"<<endl;
	}
	if(islower(ch))
	{
		cout<<"it is a Lower Case Letter"<<endl;
	}
	if(isupper(ch))
	{
		cout<<"It is a Upper Case Letter"<<endl;
	}
	if(isspace(ch))
	{
		cout<<"it is a WhiteLine Character"<<endl;
	}
	
	
	// Program Termiante
	return 0;
	
	
	
	
	
	
}
