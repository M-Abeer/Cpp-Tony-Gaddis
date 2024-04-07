// 33
#include<iostream>
using namespace std;
int half(int);
int main()
{
	int number;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	cout<<half(number)<<endl;
}
int half(int arg)
{
	return arg/2;
}
