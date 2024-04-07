// 35
#include<iostream>
using namespace std;
#include<iomanip>
void tentimes(int);
int main()
{
	int num;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	tentimes(num);
	//Program Terminate
	return 0;
}
void tentimes(int arg)
{
	cout<<"Result is "<<arg*10<<endl;
}
