// Example 6.12
#include<iostream>
using namespace std;

int sum(int, int);

int main()
{
	int total,a,b;
	cout<<"Enter a and b"<<endl;
	cin>>a>>b;
	total=sum(a,b);
	cout<<"Sum is "<<total<<endl;
	//
	return 0;
}
int sum(int arg1, int arg2)
{
	return arg1+arg2;
}
