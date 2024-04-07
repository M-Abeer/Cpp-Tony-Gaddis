// Check point 5.3
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter Character"<<endl;
	cin>>ch;
	while(ch!='Y'&&ch!='y'&&ch!='n'&&ch!='N')
	{
		cout<<"Error"<<endl;
		cout<<"Enter only Character given in Question"<<endl;
		cin>>ch;
	}
	cout<<"Done"<<endl;
	return 0;
}
