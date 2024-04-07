// 37
#include<iostream>
using namespace std;
void getnumber(int &);
int main()
{
	int number;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	cout<<"The Number is "<<number<<endl;
	getnumber(number);
	cout<<"The number is "<<number<<endl;
	// Program terminate
	return 0;
}
void getnumber(int &arg)
{
	int number;
	cout<<"Enter a Number"<<endl;
	cin>>arg;
	
}
