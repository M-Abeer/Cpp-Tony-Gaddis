// Example 6.15
#include<iostream>
using namespace std;

bool isEven(int arg)
{
	bool status;
	if(arg%2==0)
		status=true;
	else
		status=false;
		
	return status;
}

int main()
{
	int num;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	if(isEven(num))
		cout<<num<<" is even"<<endl;
	else
	{
		cout<<num<<" is odd"<<endl;
	}
	//
	return 0;
}
