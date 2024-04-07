// 36
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1,num2,sum;
	string answer;
	do
	{
		cout<<"Enter Number 1"<<endl;
		cin>>num1;
		cout<<"Enter Number 2"<<endl;
		cin>>num2;
		sum=num1+num2;
		cout<<"The Sum is "<<sum<<endl;
		//
		cout<<"If you want to terminate again press yes else no"<<endl;
		cin>>answer;
	}while(answer=="yes");
}
