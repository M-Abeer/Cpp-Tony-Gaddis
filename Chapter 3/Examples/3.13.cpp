// Use of setw 
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int a=2897, b=444, c=888, 
	d=1, e=12345, f=22,
	g=234, h=10, i=0;
	//Display the first row
	cout<<setw(6)<<a<<setw(6)<<b<<setw(6)<<c<<endl;
	//Display Seconda Row
	cout<<setw(6)<<d<<setw(6)<<e<<setw(6)<<f<<endl;
	//Display third row
	cout<<setw(6)<<g<<setw(6)<<h<<setw(6)<<i<<endl;
	return 0;
}
