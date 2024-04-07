// Example 5.7
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	double average;
	char ch;
	do
	{
		cout<<"Enter Number 1 2 and 3"<<endl;
		cin>>a>>b>>c;
		//Calculate Average
		average=(a+b+c)/3;
		cout<<"The Average is "<<average<<endl;
		cout<<"Enter Yes or No"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	cout<<"Done"<<endl;
	return 0;
	
}
