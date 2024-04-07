// CheckPoint 5.4
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s;
	cout<<"Enter String"<<endl;
	getline(cin,s);
	while(s!="Yes"&&s!="No")
	{
		cout<<"Error"<<endl;
		cout<<"Enter Only Yes or No"<<endl;
		getline(cin,s);
	}
	cout<<"Done"<<endl;
	return 0;
}
