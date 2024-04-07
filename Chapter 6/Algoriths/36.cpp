#include<iostream>
using namespace std;
void display(int arg1, double arg2, char arg3)
{
	cout<<"Here are the Values "<<arg1<<"\t"<<arg2<<"\t"<<arg3<<endl;
}

int main()
{
	int age;
	double income;
	char initial;
	// Read data from User
	cout<<"Enter Age, Income, Initial"<<endl;
	cin>>age>>income>>initial;
	display(age,income,initial);
	// Program Terminate
	return 0;
}
