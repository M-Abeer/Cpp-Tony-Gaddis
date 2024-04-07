// While Loop for Input validation
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number"<<endl;
	cin>>n;
	while(n<0||n>100)
	{
		cout<<"ERROR"<<endl;
		cout<<"Enter Value in Range 1 to 100"<<endl;
		cin>>n;
	}
	return 0;
	
}

