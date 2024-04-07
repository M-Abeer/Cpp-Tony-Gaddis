// 34
#include<iostream>
using namespace std;
int cube(int);

int main()
{
	int n;
	cout<<"Enter a Number"<<endl;
	cin>>n;
	cout<<"The Cube is "<<cube(n)<<endl;
	//
	return 0;
}
int cube(int arg)
{
	int result;
	result=arg*arg*arg;
	return result;
}
