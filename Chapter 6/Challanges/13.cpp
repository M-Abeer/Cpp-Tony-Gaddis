// Days Out

#include<iostream>
using namespace std;
#include<iomanip>

int getdata();
int absent(int);
double calculation(int,int);


int main()
{
	int a,b,c;
	a=getdata();
	b=absent(a);
	c=calculation(a,b);
	cout<<"Number of Employees are :"<<a<<endl;
	cout<<"Number of Days Employees are Absent during Previous Years :"<<b<<endl;
	cout<<"Average Number of Days Company Employees are Absent :"<<c<<endl;
	
}

int getdata()
{
	int Employees;
	cout<<"Number of Employees working in company?";
	cin>>Employees;// Use Limit According to Queation,,,Using While Loop
	return Employees;
}
int absent(int arg)
{
	int Days=0;
	for(int i=0;i<arg;i++)
	{
		cout<<"Enter Number of Days each Employee "<<(i+1)<<" missed in last Years?";
		cin>>Days;
		Days+=Days;
	}
	return Days;
}
double calculation(int arg1,int arg2)
{
	double Average;
	Average=arg2/arg1;
	return Average;
}
