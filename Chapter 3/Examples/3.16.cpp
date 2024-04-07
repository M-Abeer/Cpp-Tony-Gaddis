//
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double a,b,c,total;
	cout<<"Enter Sales of day 1 "<<endl;
	cin>>a;
	cout<<"Enter Sales of day 2 "<<endl;
	cin>>b;
	cout<<"Enter Sales of day 3 "<<endl;
	cin>>c;
	total=a+b+c;
	//Dislpay the Sales Amount
	cout<<"\nSales Amount\n";
	cout<<"-----------------\n";
	cout<<setprecision(5)<<endl;
	cout<<"Day 1:"<<setw(9)<<a<<endl;
	cout<<"Day 2:"<<setw(9)<<b<<endl;
	cout<<"Day 3:"<<setw(9)<<c<<endl;
	cout<<"Total:"<<setw(9)<<total<<endl;
	return 0;
}
