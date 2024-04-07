// 41
#include<iostream>
using namespace std;
int main()
{
	char sure;
	cin>>sure;
	
	while(sure!='Y'&&sure!='N')
	{
		cout<<"Are you sure you want to Quit?"<<endl;
		cin>>sure;
	}
}
