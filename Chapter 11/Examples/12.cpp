// Example 11.12
#include<iostream>
using namespace std;
enum Temperature{Freezing=32,Boiling=212};
int main()
{
	int Temp;
	cout<<"Enter Temperature "<<endl;
	cin>>Temp;
	if(Temp<=Freezing)
	{
		cout<<"Water is freezing"<<endl;
	}
	else if(Temp>=212)
	{
		cout<<"Water is Boiling"<<endl;
	}
	else
	{
		cout<<"Kuch bhi nhi hua "<<endl;
	}
	
}
