// Test Average
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	double a,b,c,d,e;
	double total,average;
	cout<<endl;
	cout<<"Enter marks of Test 1"<<endl;
	cin>>a;
	cout<<"Enter marks of Test 2"<<endl;
	cin>>b;
	cout<<"Enter marks of Test 3"<<endl;
	cin>>c;
	cout<<"Enter marks of Test 4"<<endl;
	cin>>d;
	cout<<"Enter marks of Test 5"<<endl;
	cin>>e;
	total=a+b+c+d+e;
	average=total/5;
	cout<<"\n--------------\n";
	cout<<"Test Average"<<endl;
	cout<<setprecision(1)<<fixed<<endl;
	cout<<"Average=:"<<average<<endl;
	return 0;
}
